# include <iostream>
# include <string>
# include "Coordinate.h"
using namespace std;
/**********************************/
/*
对象素组
要求：
    定义Coordinate类
    数据成员:m_iX和m_iY
    分别从栈和堆中实例化长度为３的对象数组
    给数组中的元素分别赋值
    便利两个数组
*/
/***********************************/
int main(void)
{
    //栈中实例化一个素组
    Coordinate coord[3];
    coord[0].m_iX = 3;
    coord[0].m_iY = 5;
    //堆中实例化一个素组
    Coordinate *p = new Coordinate[3];
    //p[0] = p;p[1] = p+1;p[2] = p+2;
    //p[0].m_iY = 20; p->m_iY = 20;
    p ->m_iX = 7;
    p[0].m_iY = 9;

    p++; // p=p+1 p+=1;下一个指针
    p ->m_iX = 11;
    p[0].m_iY = 13;//此时是第二个元素
    
    p[1].m_iX = 15;//此时是第三个元素
    p++;           //此时是第三个元素
    p ->m_iY = 17;

    for(int i = 0;i<3;i++)
    {
        cout << "coor_x" << coord[i].m_iX << endl;
        cout << "coor_y" << coord[i].m_iY << endl;
    }
    for(int j = 0;j<3;j++)
    {
        cout << "p_x" <<p->m_iX<<endl;
        cout << "p_y" <<p->m_iY<<endl;
        p--;
    }
    p++;
    delete []p;
    p = NULL;
    return 0;

}