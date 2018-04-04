# include <string>
using namespace std;

class Person 
{
public:
  Person(string name = "Jim");
  //ĞéÎö¹¹º¯Êı
  virtual~Person();
  void play();
protected:
  string m_strName;
};