//
//  location.hpp
//  cjjTest
//
//  Created by Twins on 2017/12/12.
//  Copyright © 2017年 Twins. All rights reserved.
//

#ifndef location_hpp
#define location_hpp

#include <stdio.h>

class location
{
public:
    location(int x,int y);
    location();
    ~location();
    bool isEqulaTo(location *);
    void setY(int);
    int  getY();
    void setX(int);
    int  getX();
    
private:
    int _X;
    int _Y;
};

#endif /* location_hpp */
