# include <iostream>
# include <string>
# include <stdlib.h>
# include "Teacher.h"
using namespace std;
/*
*　Teacher类
*　自定义有参默认构造函数
*　使用初始化列表初始化数据
*　数据：
*  　　年龄
*     名字
*  成员函数:
*     数据成员的封装函数
*  扩展:
*     定义可以带最多学生的个数，此为常量
*/
int main(void)
{
  Teacher t1("Merry",12,150);
  cout << t1.getName() <<" "<<t1.getAge()<<" "<< t1.getMax()<< endl;
}