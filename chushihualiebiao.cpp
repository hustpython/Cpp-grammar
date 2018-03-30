#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
  // 初始化列表先于构造函数执行
  //初始化列表可以同时初始化多个数据成员
  Student():m_strName("Jim"),m_iAge(10){}
private:
  string m_strName;
  int m_iAge;
};

class Circle
{
public:
  Circle():m_dPi(3.14){}
private:
  const double m_dPi;
};