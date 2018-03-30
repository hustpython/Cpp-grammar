# include <iostream>
# include <string>
# include <stdlib.h>
# include "Teacher.h"
using namespace std;

void test(Teacher t)
{

}
int main(void)
{
    //通过栈实例化构造函数
    Teacher t1;
    //通过堆实例化构造函数
    //Teacher *p = new Teacher();
    //delete p;
    Teacher t2(t1);
    system("pause");
    return 0;
}