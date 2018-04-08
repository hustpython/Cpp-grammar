# include <iostream>
# include "stdlib.h"
# include "FighterPlane.h"
using namespace std;

// 接口类
//    1.Flyable类,成员函数:takeoff,land 
//    2.Plane类,成员函数:构造函数,takeoff,land,printCode,
//              数据成员:m_strName
//    3.FighterPlane类,成员函数:构造函数，takeoff,land 
//    4.全局函数flyMatch(Flyable*f1,Flyable*f2)
// void flyMatch(Flyable *f1,Flyable *f2)
// {
//     f1 -> takeoff();
//     f1 -> land();
//     f2 -> takeoff();
//     f2 -> land();
// }
void flyMatch(Plane *f1,Plane *f2)
{
    f1 -> printCode();
    f2 -> printCode();
}

int main(void)
{
    FighterPlane p1("001");
    FighterPlane p2("002");
    //p1.printCode();
    //p2.printCode();

    flyMatch(&p1,&p2);

    return 0;
}