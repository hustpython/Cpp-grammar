//
//  MGSize.hpp
//  cjjTest
//
//  Created by Twins on 2017/12/12.
//  Copyright © 2017年 Twins. All rights reserved.
//

#ifndef MGSize_hpp
#define MGSize_hpp

#include <stdio.h>

class MGSize
{
public:
    MGSize(const MGSize& size);
    MGSize();
    ~MGSize();
    MGSize(int x,int y);
    void setSizeY(int);
    int  getSizeY();
    void setSizeX(int);
    int  getSizeX();
    
private:
    int _size_X;
    int _size_Y;
};

#endif /* MGSize_hpp */
