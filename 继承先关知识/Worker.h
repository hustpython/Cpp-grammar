# include "Person.h"
//¹«ÓÐ¼Ì³Ð
class Worker:public Person 
{
public:
  Worker();
  ~Worker();
  void work();
  int m_iSalary;
};