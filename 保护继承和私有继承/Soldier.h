# include "Person.h"
//¹«ÓÐ¼Ì³Ð
//class Soldier:public Person
class Soldier:protected Person
{
public: 
  Soldier();
  void work();
protected: 
  int m_iAge;
};