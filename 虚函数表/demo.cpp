# include <iostream>
# include <stdlib.h>
# include "Circle.h"
# include "Shape.h"
using namespace std;

// 虚函数表
//     要求：
//        1.定义Shape类，成员函数：calcArea()，构造函数，析构函数
//        2.定义Circle类
//     概念说明: 
//        1.对象大小
//        2.对象地址
//        3.对象成员的地址
//        4.虚函数表指针
int main(void)
{
    Shape shape;
    //1个内存单元标定自己的存在
    cout << sizeof(shape) << endl;

    //强制类型转换
    int *p = (int *) &shape;
    //cout << p << endl;
    cout << (unsigned int)(*p) << endl;
    Circle circle(100);
    int *q = (int*) &circle;
    //cout << q << endl;
    cout << (unsigned int)(*q) << endl;
    q+=2;
    //q++;
    cout << (unsigned int)(*q) << endl;
    //cout << sizeof(circle) << endl;
    return 0;
}