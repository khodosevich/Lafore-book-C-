#include <iostream>
using namespace std;

void StaticVar(int x){
    static int VAR = 0;
    
    VAR += x;
    
    cout << VAR << endl;
    
}


int main() {
    
    int x = 6, y = 7;
    
    StaticVar(x);
    StaticVar(y);
    StaticVar(y);
    StaticVar(y);
    
    return 0;
}
