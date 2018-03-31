//
//  main.cpp
//  cjjTest
//
//  Created by Twins on 2017/12/7.
//  Copyright © 2017年 Twins. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include "MontionController.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    const int size_y = 10;
    const int size_x = 6;
    MGSize * size = new MGSize(size_x,size_y);
    MGManager * manager = new MGManager('*' ,' ' ,'A' ,size);
    MontionController * controller = new MontionController(RuleTypeRightHand);
    
    //InitData
    Diamond* diamonds[size_y][size_x] =
    {{new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall)}
    ,{new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall)}
    ,{new Diamond(DiamondTypeWall),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeWall)}
    ,{new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall)}
    ,{new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeWall)}
    ,{new Diamond(DiamondTypeWall),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall)}
    ,{new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall)}
    ,{new Diamond(DiamondTypeWall),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeWall)}
    ,{new Diamond(DiamondTypeWall),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeWall)}
    ,{new Diamond(DiamondTypeWall),new Diamond(DiamondTypeRoad),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall),new Diamond(DiamondTypeWall)}
    };
//    cout << diamonds[1][1]->getDiaType() << endl;

    location * endLocation = new location(3,0);
    location * personLocation = new location(1,9);
    manager->setPresonLocation(personLocation);
    manager->setEndLocation(endLocation);
    manager->setDiamonds(*diamonds);
    manager->draw();
    
    controller->runNext(manager);
    
    delete controller;
    delete manager;
    controller = NULL;
    manager = NULL;
    return 0;
}

/**
 COORD cd;
 cd.X = x;
 cd.Y = y;
 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleCursorPosition(handle,cd);
 */
