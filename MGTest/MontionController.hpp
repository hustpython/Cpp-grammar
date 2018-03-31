//
//  MontionController.hpp
//  cjjTest
//
//  Created by Twins on 2017/12/11.
//  Copyright © 2017年 Twins. All rights reserved.
//

#ifndef MontionController_hpp
#define MontionController_hpp

#include <stdio.h>
#include "MGManager.hpp"
enum RuleType
{
    RuleTypeLeftHand = 0,
    RuleTypeRightHand
};

enum CheakType
{
    CheakTypeUp = 0,
    CheakTypeRight,
    CheakTypeLeft,
    CheakTypeDown
};

class MontionController{
public:
    MontionController(RuleType type);
    ~MontionController();
    
    void runNext(MGManager *);
    void setRuleType(RuleType);
private:
    bool canMove(MGManager * manager,int index);
    int getDiamondsIndex(MGManager * manager,int curIndex,CheakType type);
    RuleType _type;
};

#endif /* MontionController_hpp */
