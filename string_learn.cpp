#include <iostream>
#include <string>
using namespace std;
int main()
{   
    string name;
    cout << "input your name" <<endl;
    getline(cin,name);
    if(name.empty()){
       cout << "your input is null" << endl;
       return 0;
    };
    cout << "hello , " + name << endl;
    if(name == "imooc"){
        cout << "you are administrator" << endl;
    };
    cout << "the lenth is :" << name.size() << endl;
    cout << "your name's first name is :"<< name[0] << endl;

}