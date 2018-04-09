# include <iostream>
# include <stdlib.h>
# include <vector>
# include <list>
# include <map>
# include <string>
using namespace std;
//通过使用标准模板库,学习其用法

int main(void)
{
    // vector<int> vec;
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.push_back(6);
    // vec.pop_back();
    // cout << vec.size() << endl;
    // for(int i=0;i<vec.size();i++)
    // {
    //     cout << vec[i] << endl;
    // }
    //vector<int>::iterator itor=vec.begin();
    //cout << *itor << endl;
    //vec.end():最后一个元素的下一个位置
    // for(;itor != vec.end(); itor++)
    // {
    //    cout << *itor << endl;
    // }
    //front第一个，back最后一个
    // cout << vec.front() << endl;
    // cout << vec.back() << endl;
    // 
    map<int,string> m;
    pair<int,string> p1(3,"hello");
    pair<int,string> p2(6,"world");
    pair<int,string> p3(8,"beijing");
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    // cout << m[3] << endl;
    // cout << m[6] << endl;
    map<int,string>::iterator itor=m.begin();
    for(;itor != m.end();itor++)
    {
        cout <<itor -> first << endl;
        cout <<itor -> second << endl;
        cout << endl;
    }

    
    return 0;
}
