# include <iostream>
# include "Person.h"
using namespace std;

Person::Person()
{
    cout << "Person()" << endl;
}
Person::~Person()
{
    cout << "~Person()" << endl;
}
void Person::eat()
{
    cout << "eat()" << endl;
}