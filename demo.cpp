#include "Teacher.h"
using namespace std;
int main(void)
{
    Teacher t1;
    Teacher t2("Merry",5);
    Teacher t3("James");
    cout << t1.getName() << " "<< t1.getAge() << endl;
    cout << t2.getName() << " "<< t2.getAge() << endl;
    cout << t3.getName() << " "<< t3.getAge() << endl;
}