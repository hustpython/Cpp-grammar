# ifndef COORDINATE_H
# define COORDINATE_H
# include <iostream>
using namespace std;
class Coordinate 
{
  friend Coordinate &operator-(Coordinate &c);
  //+ 友元函数重载
  friend Coordinate operator+(Coordinate c1,Coordinate c2);
  friend ostream &operator<<(ostream &output,Coordinate &coor);
public: 
  Coordinate(int x, int y);
  Coordinate &operator++();
  //后置运算符重载 int
  Coordinate operator++(int);
  int operator[](int index);
  //Coordinate &operator-();
  //+ 重载 第一个参数是this指针
  //Coordinate operator+(Coordinate &c);
  int getX();
  int getY();
private: 
  int m_iX;
  int m_iY;
};

# endif