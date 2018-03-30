class Array
{
public:
  //各种函数的申明
  //构造函数
  Array(int count);
  //拷贝构造函数
  Array(const Array &arr);
  //析构函数
  ~Array();
  //封装函数
  void setCount(int count);
  int getCount();
  void printAddr();
  void printArr();
private:
  int m_iCount;
  int *m_pArr;
};