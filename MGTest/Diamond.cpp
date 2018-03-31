//
//  Diamond.cpp
//  cjjTest
//
//  Created by Twins on 2017/12/11.
//  Copyright © 2017年 Twins. All rights reserved.
//

#include "Diamond.hpp"
#include <iostream>
using namespace std;
Diamond::Diamond(DiamondType diaType):_diaType(diaType),_diamondSize(1),_diamondChar(' ')
{
    
    switch (diaType) {
        case DiamondTypeRoad:
            this->setDiamondChar(' ');
            break;
        case DiamondTypeWall:
            this->setDiamondChar('*');
            break;
        case DiamondTypePerson:
            this->setDiamondChar('A');
            break;
        default:
            break;
    }
}
Diamond::~Diamond(){
    cout << "free=Diamond" << endl;
}
Diamond::Diamond(const Diamond& dia){
    cout << "copyDiamond" <<endl;
}
void            Diamond::setDiamondChar     (char diamondChar){
//    cout << "setDiamondChar"<<this->_diamondChar <<"to" <<diamondChar <<endl;

    this->_diamondChar = diamondChar;
}
char            Diamond::getDiamondChar  (void){
//    std::cout << this->_diamondChar;
    return this->_diamondChar;
}

bool            Diamond::isEqualTo          (DiamondType type){
    return true;
//
//    switch (type) {
//        case DiamondTypeRoad:
//            this->setDiamondChar(' ');
//            break;
//        case DiamondTypeWall:
//            this->setDiamondChar('*');
//            break;
//        case DiamondTypePerson:
//            this->setDiamondChar('A');
//            break;
//        default:
//            break;
//    }
//    return this->_diaType == type;
}
DiamondType     Diamond::getDiaType         (void){
    
    return this->_diaType;
}
void            Diamond::setDiaType         (DiamondType type){
    this->_diaType = type;
}

