#include "Teacher.h"
//定义无参构造函数
/*
Teacher::Teacher()
{
    m_strName = "Jim";
    m_iAge = 5;
    cout << "Teacher()" << endl;
}
*/
//有参构造函数
//初始化列表
Teacher::Teacher(string name,int age,int m):m_strName(name),m_iAge(age),m_iMax(m)
{
    //m_strName = name;
    //m_iAge = age;
    cout << "Teacher(string name,int age)" << endl;
}
//定义拷贝构造函数
Teacher::Teacher(const Teacher &tea)
{
    cout << "Teacher(const Teacher &tea)" << endl;
}
Teacher::~Teacher()
{
    cout << "~Teacher()" << endl;
}
void Teacher::setName(string name)
{
    m_strName = name;
}
string Teacher::getName()
{
    return m_strName;
}
void Teacher::setAge(int age)
{
    m_iAge = age;
}
int Teacher::getAge()
{
    return m_iAge;
}
int Teacher::getMax()
{
    return m_iMax;
}