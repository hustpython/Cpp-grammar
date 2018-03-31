//
//  Diamond.hpp
//  cjjTest
//
//  Created by Twins on 2017/12/11.
//  Copyright © 2017年 Twins. All rights reserved.
//

#ifndef Diamond_hpp
#define Diamond_hpp

enum DiamondType
{
    DiamondTypeRoad = 0,
    DiamondTypeWall,
    DiamondTypePerson
};

#include <stdio.h>
//#include ""
class Diamond
{
public:
    Diamond(DiamondType disType);
    Diamond(const Diamond& dia);
    ~Diamond();
    
    bool            isEqualTo       (DiamondType type);
    DiamondType     getDiaType      (void);
    void            setDiaType      (DiamondType type);
    void            setDiamondChar  (char);
    char            getDiamondChar  (void);
private:
    DiamondType  _diaType;
    char         _diamondChar;
    int          _diamondSize;
};

#endif /* Diamond_hpp */
