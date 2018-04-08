# include "FighterPlane.h"
# include <iostream>
using namespace std;

FighterPlane::FighterPlane(string code):Plane(code)
{
}
void FighterPlane::takeoff()
{
    cout << "FIghterPlane -- takeoff" << endl;
}
void FighterPlane::land()
{
    cout << "FIghterPlane -- land" << endl;
}