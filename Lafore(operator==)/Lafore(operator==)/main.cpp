#include <iostream>
#include <string.h>
using namespace std;

class MyStr{
private:
    string str;
    
public:
  
    MyStr(string str){
        this->str = str;
    }
    
    bool operator ==(MyStr ss) const
    {
        return ( !str.compare(ss.str)) ? true : false ;
    }
    
};

int main() {
    
    string str1,str2;
    cout << "Enter 2 string:" << endl;
    cin >> str1;
    cin >> str2;
    
    MyStr s1(str1);
    MyStr s2(str2);
  
    if (s1 == s2)
    {
        cout << "Good" << endl;
    }
    else
        cout << "Bad" << endl;
    
    return 0;
}
