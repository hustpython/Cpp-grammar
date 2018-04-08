# ifndef FIGHTERPLANE_H
# define FIGHTERPLANE_H

# include "Plane.h"
# include "Flyable.h"
# include <string>
using namespace std;
class FighterPlane:public Plane,public Flyable
{
public: 
  FighterPlane(string code);
  virtual void takeoff();
  virtual void land();
};
# endif