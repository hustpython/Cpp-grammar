//
//  MontionController.cpp
//  cjjTest
//
//  Created by Twins on 2017/12/11.
//  Copyright © 2017年 Twins. All rights reserved.
//

#include "MontionController.hpp"
#include <iostream>
using namespace std;


MontionController::MontionController(RuleType type):_type(type){
    
}
MontionController::~MontionController(){
    cout << "free=MontionController" << endl;

}

void MontionController::runNext(MGManager * manager){
    //        cout <<"101"<<manager->getDiamonds()[10]->getDiaType() << endl;
    
    //前提右手触墙//右 上 左 下
    int curIndex = manager->getPersonLocation()->getX()+(manager->getPersonLocation()->getY()*manager->getMGSize()->getSizeX());
    int rightIndex = getDiamondsIndex(manager,curIndex,CheakTypeRight);
    int upIndex = getDiamondsIndex(manager,curIndex,CheakTypeUp);
    int leftIndex = getDiamondsIndex(manager,curIndex,CheakTypeLeft);
    int downIndex = getDiamondsIndex(manager,curIndex,CheakTypeDown);
    int nextIndex = curIndex;
    cout<<"目前方向";
    switch (manager->getPersonDirection()) {
        case PersonDirectionUp:{
            cout << "上";
            break;}
        case PersonDirectionLeft:
            cout << "左";
            break;
        case PersonDirectionDown:
            cout << "下";
            break;
        case PersonDirectionRight:
            cout << "右";
            break;
        default:
            break;
    }
    cout << endl;
    //正在往上走
    if (manager->getPersonDirection() == PersonDirectionUp ) {
        if(canMove(manager, rightIndex))        {
            cout << "【正在往上走】发现右手空了，转向右边" << endl;
            nextIndex = rightIndex;
            manager->setPersonDirection(PersonDirectionRight);
        }
        else if (canMove(manager, upIndex))  {
            cout << "【正在往上走】发现右边走不通，继续往前走" << endl;
            nextIndex = upIndex;
            manager->setPersonDirection(PersonDirectionUp);
        }
        else{
            cout << "【正在往上走】发现右边和前面走不通，转向左边" << endl;
            manager->setPersonDirection(PersonDirectionLeft);
            runNext(manager);
            return;
        }
    }
    //正在往左走
    else if (manager->getPersonDirection() == PersonDirectionLeft ) {
        if(canMove(manager, upIndex))        {
            cout << "【正在往左走】发现右手空了，转向上边" << endl;
            nextIndex = upIndex;
            manager->setPersonDirection(PersonDirectionUp);
        }
        else if (canMove(manager, leftIndex))  {
            cout << "【正在往左走】发现右边走不通，继续往前走" << endl;
            nextIndex = leftIndex;
            manager->setPersonDirection(PersonDirectionLeft);
        }
        else{
            cout << "【正在往左走】发现右边和前面走不通，转向下边" << endl;
            manager->setPersonDirection(PersonDirectionDown);
            runNext(manager);
            return;
        }
    }
    //正在往下走
    else if (manager->getPersonDirection() == PersonDirectionDown ) {
        if(canMove(manager, leftIndex))        {
            cout << "【正在往下走】发现右手空了，转向左边" << endl;
            nextIndex = leftIndex;
            manager->setPersonDirection(PersonDirectionLeft);
        }
        else if (canMove(manager, downIndex))  {
            cout << "【正在往下走】发现右边走不通，继续往前走" << endl;
            nextIndex = downIndex;
            manager->setPersonDirection(PersonDirectionDown);
        }
        else{
            cout << "【正在往下走】发现右边和前面走不通，转向右边" << endl;
            manager->setPersonDirection(PersonDirectionRight);
            runNext(manager);
            return;
        }
    }
    //正在往右走
    else if (manager->getPersonDirection() == PersonDirectionRight ) {
        if(canMove(manager, downIndex))        {
            cout << "【正在往右走】发现右手空了，转向下边" << endl;
            nextIndex = downIndex;
            manager->setPersonDirection(PersonDirectionDown);
        }
        else if (canMove(manager, rightIndex))  {
            cout << "【正在往右走】发现右边走不通，继续往前走" << endl;
            nextIndex = rightIndex;
            manager->setPersonDirection(PersonDirectionRight);
        }
        else{
            cout << "【正在往右走】发现右边和前面走不通，转向下边" << endl;
            manager->setPersonDirection(PersonDirectionUp);
            runNext(manager);
            return;
        }
    }
    
    //更新位置
    manager->setPresonLocation(new location(nextIndex,0));
    manager->draw();
    if (manager->getEndLocation()->isEqulaTo(manager->getPersonLocation())) {
        cout << "终于走出来了" <<endl;
        return;
    }else{
        runNext(manager);
    }
}

/**
 获取相对的下个坐标
 */
int MontionController::getDiamondsIndex(MGManager * manager,int curIndex,CheakType type){
    //    cout <<"101"<<manager->getDiamonds()[10]->getDiaType() << endl;
    int newIndex = curIndex;
    switch (type) {
        case CheakTypeUp:{
            newIndex = curIndex - manager->getMGSize()->getSizeX();
            
            break;}
        case CheakTypeRight:{
            if ((curIndex+1)%manager->getMGSize()->getSizeX() == 0) {
                return curIndex;
            }
            newIndex = curIndex + 1;
            
            break;}
        case CheakTypeLeft:{
            if (curIndex==0 || curIndex%manager->getMGSize()->getSizeX() == 0) {
                return curIndex;
            }
            newIndex = curIndex - 1;
            
            break;}
        case CheakTypeDown:{
            newIndex = curIndex + manager->getMGSize()->getSizeX();
            break;}
        default:
            break;
    }
    
    return newIndex;
}
/**
 判断该坐标能不能走
 */
bool MontionController::canMove(MGManager * manager,int index){
    if (index<0 ) return false;
    if (index>=(manager->getMGSize()->getSizeX()*manager->getMGSize()->getSizeY())) return false;
    if (manager->getDiamonds()[index]->getDiaType()==DiamondTypeWall) {
        cout << "目标位置是墙，不能走" << endl;
        return false;
    }
    
    
    return true;
}
void MontionController::setRuleType(RuleType type){
    this->_type = type;
}
