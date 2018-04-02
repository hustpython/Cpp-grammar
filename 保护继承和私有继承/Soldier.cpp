# include "Soldier.h"
# include <iostream>
using namespace std;

Soldier::Soldier():m_iAge(20)
{
}
void Soldier::work()
{
  m_strName = "Jim";
  cout << m_strName << endl;
  cout << m_iAge << endl;
  cout << "Soldier--work()" << endl;
}