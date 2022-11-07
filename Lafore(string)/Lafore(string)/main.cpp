#include <iostream>
#include <string>
using namespace std;

int main() {

    string a ="matvey";
    string b ="matvey";
    
    if(a == b){
        cout << "Matvey" << endl;
    }
    
    string c = a + b;
    
    cout << c << endl;
    
    int n = a.compare(b);
    
    cout << n << endl;
    
    cout << a.substr(0,3) << endl;
    cout << a.capacity() << endl;
    
    
    return 0;
}
