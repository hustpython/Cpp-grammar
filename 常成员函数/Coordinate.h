class Coordinate
{
public:
  //函数申明
  Coordinate(int x,int y);//构造函数
  ~Coordinate();//析构函数
  void setX(int x);//封装函数
  void setY(int y);
  int getX() const;
  int getY() const;
private:
  //数据申明
  int m_iX;//数据成员
  int m_iY;
};