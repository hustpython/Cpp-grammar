# include <iostream>
# include <stdlib.h>
# include "IndexException.h"
using namespace std;

// 异常处理: 
//    1.定义一个Exception类，成员函数:printException，析构函数
//    2.定义一个IndexException类,成员函数:printException()
void test()
{
    throw IndexException();
}
int main(void)
{
    try
    {
       test();
    }
    // catch(Exception &e)
    // {
    //     e.printException();
    // }
    catch(...)
    {
        cout << "Exception" << endl;
    }
    return 0;
}