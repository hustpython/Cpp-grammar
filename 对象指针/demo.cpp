# include <iostream>
# include "Coordinate.h"
using namespace std;

/*
要求:
   定义Coordinate类
   数据成员:m_iX和m_iY
   声明对象指针，并通过指针操控对象

   计算两个点，横，纵坐标的和
*/
int main(void)
{
    // Coordinate *p1 = NULL;
    // p1 = new Coordinate;
    // Coordinate *p2 = new Coordinate();
    // p1 ->m_iX = 10;
    // p1 ->m_iY = 20;
    // //使指针变成对象
    // (*p2).m_iX = 30;
    // (*p2).m_iY = 40;
    // cout << p1->m_iX + (*p2).m_iX << endl;
    // cout << p1->m_iY + (*p2).m_iY << endl;
    // delete p1;
    // p1 = NULL;
    // delete p2;
    // p2 = NULL;
    Coordinate p1;
    //p2指向p1，使用取地址符号&
    Coordinate *p2 = &p1;

    p2 -> m_iX = 10;
    p2 -> m_iY = 20;
    //通过p2操作p1并打印p1成员
    cout << p1.m_iX << endl;
    cout << p1.m_iY << endl;
    return 0;
}