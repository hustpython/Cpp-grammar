# include <iostream>
# include "Line.h"
/************************/
/*　对象成员
要求:
    定义两个类:
       坐标类:Coordinate
       数据成员:横坐标m_iX,纵坐标m_iY
       成员函数:构造函数，析构函数,数据封装函数
       线段类:Line
       数据成员:点A m_coorA, 点B m_coorB
       成员函数:构造函数,析构函数,数据封装函数,信息打印函数
*/
/***********************/

int main(void)
{
   //显示对象Line和坐标Coordinate实例化顺序和销毁顺序
   Line *p = new Line(1,2,3,4);
   p ->printInfo();
   delete p;
   p = NULL;
   return 0;
}