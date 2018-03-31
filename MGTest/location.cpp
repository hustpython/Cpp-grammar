//
//  location.cpp
//  cjjTest
//
//  Created by Twins on 2017/12/12.
//  Copyright © 2017年 Twins. All rights reserved.
//

#include "location.hpp"
#include <iostream>
using namespace std;
location::location(int x,int y):_X(x),_Y(y){}
location::location(){}
location::~location(){    cout << "free=location" << endl;}
bool location::isEqulaTo(location * locat){return (this->_X==locat->_X && this->_Y == locat->_Y);}
void location::setY(int y){this->_Y = y;}
int  location::getY(){return this->_Y;}
void location::setX(int x){this->_X = x;}
int  location::getX(){return this->_X;}
