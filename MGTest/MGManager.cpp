//
//  MGManager.cpp
//  cjjTest
//
//  Created by Twins on 2017/12/11.
//  Copyright © 2017年 Twins. All rights reserved.
//

#include "MGManager.hpp"
#include <iostream>
using namespace std;

MGManager::MGManager(char wallChar ,char roadChar ,char personChar ,MGSize* MGSize)
:_wallChar(wallChar),_RoadChar(roadChar),_personChar(personChar),_MGSize(MGSize),_diamondWidth(1),_personDir(PersonDirectionUp)
{
    
}
MGManager::~MGManager(){
    cout << "free=MGManager" << endl;
    for (int i = 0; i<(_MGSize->getSizeX()*_MGSize->getSizeY()); i++) {
        Diamond *& diamond = _diamonds[i];
        delete diamond;
        diamond = NULL;
    }
//    delete _diamonds;
    delete _MGSize;
    delete _endLocation;
    delete _personLocation;
    _diamonds = NULL;
    _MGSize = NULL;
    _endLocation = NULL;
    _personLocation = NULL;
}


void        MGManager::setDiamonds(Diamond **Diamonds){
    this->_diamonds = Diamonds;
}
Diamond**    MGManager::getDiamonds(){
    return this->_diamonds;
}
void        MGManager::setMGSize(MGSize * MGSize){
    this->_MGSize = MGSize;
}
MGSize*     MGManager::getMGSize(){
    return this->_MGSize;
}
void        MGManager::setPresonLocation(location * personLocation){
    this->_personLocation = personLocation;
}
location*   MGManager::getPersonLocation(){
    return this->_personLocation;
}
void        MGManager::setEndLocation(location * endLocation){
    this->_endLocation = endLocation;
}
location*   MGManager::getEndLocation(){
    return this->_endLocation;
}
void        MGManager::setPersonDirection(PersonDirection dir){
    this->_personDir = dir;
}
PersonDirection MGManager::getPersonDirection(){
    return this->_personDir;
}
void        MGManager::draw(){
//    cout <<"y"<<_MGSize->getSizeY() << "x"<<_MGSize->getSizeX() << endl;
//    cout <<"101"<<_diamonds[10]->getDiaType() << endl;
    //删除人物
    for (int i = 0; i<(_MGSize->getSizeX()*_MGSize->getSizeY()); i++) {
        Diamond * diamond = _diamonds[i];
        if (diamond->getDiaType()==DiamondTypePerson) {
            diamond->setDiamondChar(' ');
            diamond->setDiaType(DiamondTypeRoad);
        }
    }
    //建立人物
    int nextIndex = _personLocation->getX()+(getPersonLocation()->getY()*_MGSize->getSizeX());
    cout << nextIndex << endl;
    Diamond *& personDia = _diamonds[nextIndex];
    personDia->setDiamondChar('A');
    personDia->setDiaType(DiamondTypePerson);
    for (int i = 0; i<(_MGSize->getSizeX()*_MGSize->getSizeY()); i++) {
        Diamond * diamond = _diamonds[i];
        cout << diamond->getDiamondChar();
        if ((i+1)%_MGSize->getSizeX()==0) {
            cout << endl;
        }
    }
//    for (int y = 0; y<_MGSize->getSizeY(); y++) {
//        for (int x = 0; x<_MGSize->getSizeX(); x++) {
//            Diamond * diamonds = _diamonds[y];
//            Diamond * diamond = diamonds[x];
//            cout << diamond->getDiamondChar();
//        }
////        _diamonds++;
//        cout << endl;
//    }
}
