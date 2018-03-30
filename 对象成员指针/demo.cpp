# include <iostream>
# include "Line.h"
using namespace std;
/*
对象成员指针
要求：
　　定义两个类:
      坐标类：Coordinate
      数据成员：m_iX,m_iY
      成员函数:构造函数，析构函数,数据封装函数
      线段类:Line
      数据成员:m_CoorA,m_CoorB
      成员函数:构造函数，析构函数,信息打印函数

*/
int main(void)
{
    Line *p = new Line(1,2,3,4);
    p -> printInfo();
    delete p;
    p = NULL;
    //64位编译环境，所以指针大小为８（32位为4)
    //Line 中包含了２个指针:8×２ = 16
    cout << sizeof(p) << endl;
    cout << sizeof(Line) << endl;
    return 0;
}