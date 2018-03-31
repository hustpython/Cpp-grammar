#include <iostream>
#include "Array.h"
using namespace std;

// 示例要求�?
//   定义一个Array类�?
//   数据成员：m_iLen表示数组长度
//   成员函数�?
//      构造函�?
//      析构函数
//      len的封装函�?
//      信息输出函数 printInfo

int main(void)
{
    Array arr1(10);
    //arr1.printInfo().setLen(5).printInfo();
    //arr1.printInfo()->setLen(5)->printInfo();
    //�Ƚ�this��arr1�ĵ�ַ�Ƿ�һ��
    arr1.printInfo();
    //&ȡ��ַ����
    cout << &arr1 << endl;
    //cout << "len = " << arr1.getLen() << endl;
    //cout << arr1.getLen() << endl;
    return 0;
}    