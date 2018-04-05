# include "Person.h"
//¹«ÓÐ¼Ì³Ð
//class Soldier:public Person
class Soldier:public Person
{
public: 
  Soldier(string name = "James",int age = 20);
  virtual ~Soldier();
  void work();
protected: 
  int m_iAge;
};