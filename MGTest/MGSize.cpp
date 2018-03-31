//
//  DiamondSize.cpp
//  cjjTest
//
//  Created by Twins on 2017/12/12.
//  Copyright © 2017年 Twins. All rights reserved.
//

#include "MGSize.hpp"
#include <iostream>
using namespace std;

MGSize::MGSize(const MGSize& size){
    this->_size_Y = size._size_Y;
    this->_size_X = size._size_X;
}

MGSize::MGSize(){
    this->_size_Y = 10;
    this->_size_X = 10;
}
MGSize::MGSize(int x,int y){
    this->_size_Y = y;
    this->_size_X = x;
}
MGSize::~MGSize(){
    cout << "free=MGSize" << endl;
}
void MGSize::setSizeY(int size_Y){
    this->_size_Y = size_Y;
}
int  MGSize::getSizeY(){
    return this->_size_Y;
}
void MGSize::setSizeX(int size_X){
    this->_size_X = size_X;
}
int  MGSize::getSizeX(){
    return this->_size_X;
}



