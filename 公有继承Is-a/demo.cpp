# include <iostream>
# include <stdlib.h>
# include "Soldier.h"

void test1(Person p)
{
    p.play();
}
void test2(Person &p)
{
    p.play();
}
void test3(Person *p)
{
    p->play();
}

int main(void)
{
    //Soldier soldier;

    //Person p = soldier;
    //Person p;
    //Person *p = &soldier;
    //p = soldier;
    // Person *p = new Soldier;
    // p -> play();
    // //p -> work();通过父类定义的变量或指针不能调用子类的成员函数
    // //p.play();
    // delete p;
    // p = NULL;
    ////////////////////////
    Person p;
    Soldier s;
    test1(p);
    test1(s);
    //引用没有临时变量
    // test2(p);
    // test2(s);
    //test3(&p);
    //test3(&s);
    return 0;
}
