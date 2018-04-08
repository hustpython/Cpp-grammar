# include <iostream>
# include <stdlib.h>
# include "Time.h"
# include "Match.h"
using namespace std;

// 友元函数
//   1.友元全局函数
//   2.友元成员函数
//全局函数的声明
//void printTime(Time &t);

int main()
{
    Time t(6,34,25);
    Match m;
    m.printTime(t);
    //printTime(t);
    return 0;
}
//全局函数的定义
// void printTime(Time &t)
// {
//     cout << t.m_iHour <<":"<< t.m_iMinute <<":"<<t.m_iSecond << endl;
// }