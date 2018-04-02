# include <iostream>
# include <stdlib.h>
# include "Infantry.h"

// 保护继承和私有继承
//    要求:1.Person类
//           数据成员:m_strName
//           成员函数:play()
//         2.Solider类
//           数据成员:m_iAge 
//           成员函数:work()
//         3.Infantry步兵类
//           成员函数:attack()
int main(void)
{
    Infantry infantry;
    //父类成员函数
    infantry.attack();
    //infantry.work();
    //己类成员函数
    //infantry.play();
    return 0;
}