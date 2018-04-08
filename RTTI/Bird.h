# ifndef BIRD_H
# define BIRD_H
# include "Flyable.h"
# include <string>
using namespace std;
class Bird:public Flyable
{
public: 
  void foraging();
  virtual void takeoff();
  virtual void land();
};

# endif