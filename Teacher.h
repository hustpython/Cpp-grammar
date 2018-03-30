#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
   //Teacher();//申明无参构造函数，与类同名
   Teacher(string name = "Jim",int age = 10,int m =100);//有参构造函数
   //声明拷贝定义函数
   Teacher(const Teacher &tea);
   //申明析构函数
   ~Teacher();
   void setName(string name);//申明函数
   string getName();
   void setAge(int age);
   int getAge();
   int getMax();
private:
   //数据成员
   string m_strName;
   int m_iAge; 
   // const int m_iMax; 
   int m_iMax;         
};