# include "Tank.h"
# include <stdlib.h>
# include <iostream>
using namespace std ;

// 静态数据成员与静态成员函数
//    要求:定义Tank类,数据成员:坦克编号:m_cCode,坦克数量:s_iCount
//                   成员函数:构造函数,析构函数,fire,getCount

int main(void)
{
    //cout << Tank::getCount() << endl;
    //Tank t1('A');
    Tank *p = new Tank('A');
    cout << Tank::getCount() << endl;
    Tank *q = new Tank('B');
    cout << q-> getCount() << endl;

    delete p;
    delete q;
    p = NULL;
    q = NULL;
    cout << Tank::getCount() << endl;
    return 0;
}