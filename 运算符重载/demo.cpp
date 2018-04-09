# include <iostream>
# include "Coordinate.h"
using namespace std;

// 运算符重载---一元运算符重载
// 　　　要求:定义Coordinate 坐标类
//           成员函数:构造函数,getX,getY
//           数据成员:m_iX,m_iY
//      1.负号运算符重载(成员函数,友元函数)
//      2.++运算符重载(前置++,后置++)
        //     ---二元运算符重载
        // 3.+
        // 4.<<
        // 5.[]

 int main(void)
 {
     //Coordinate coor1(1,3);
     //cout << coor1.getX()<<","<< coor1.getY() << endl;
     //-coor1;//coor1.operator-();
     //++coor1;
     //cout << (coor1++).getX()<<",";
     //cout << (coor1++).getY() << endl;
     //cout << coor1.getX()<<","<< coor1.getY() << endl;
     Coordinate coor1(1,3);
     Coordinate coor2(2,4);
     Coordinate coor3(0,0);

     coor3 = coor1 + coor2 ;
     //cout << coor3.getX()<<","<< coor3.getY() << endl;
     cout << coor3[0] << endl;
     cout << coor3[1] << endl;

     return 0;
 }
