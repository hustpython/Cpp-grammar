//
//  MGManager.hpp
//  cjjTest
//
//  Created by Twins on 2017/12/11.
//  Copyright © 2017年 Twins. All rights reserved.
//

#ifndef MGManager_hpp
#define MGManager_hpp

#include <stdio.h>

//#include "MontionController.hpp"
#include "Diamond.hpp"
#include "MGSize.hpp"
#include "location.hpp"
enum PersonDirection{
    PersonDirectionUp = 0,
    PersonDirectionLeft = 1,
    PersonDirectionRight = 2,
    PersonDirectionDown = 3,

};

class MGManager
{
public:
    MGManager(char wallChar ,char roadChar ,char personChar ,MGSize* MGSize);
    ~MGManager();
    
    
    void        setDiamonds(Diamond **);
    Diamond**    getDiamonds();
    void        setMGSize(MGSize *);
    MGSize*     getMGSize();
    void        setPresonLocation(location *);
    location*   getPersonLocation();
    void        setEndLocation(location *);
    location*   getEndLocation();
    void        setPersonDirection(PersonDirection dir);
    PersonDirection getPersonDirection();
    void        draw();
private:
    const char  _wallChar;
    const char  _RoadChar;
    const char  _personChar;
    const int   _diamondWidth;
    
    location*   _personLocation;
    location*   _endLocation;
    Diamond**    _diamonds;
    MGSize*     _MGSize;
    PersonDirection _personDir;
};

#endif /* MGManager_hpp */
