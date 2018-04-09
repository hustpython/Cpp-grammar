# include <iostream>
# include "Tank.h"

using namespace std ;

int Tank::s_iCount = 10;

Tank::Tank(char code)
{
    m_cCode = code;
    s_iCount ++ ;
    cout << "Tank" << endl;
}
Tank::~Tank()
{
    s_iCount --;
    cout << "~Tank" << endl;
}
void Tank::fire()
{
    //非静态成员函数可以调用静态成员函数
    getCount();
    cout << "Tank ~ fire" << endl;
}

int Tank::getCount()
{
    return s_iCount;
}