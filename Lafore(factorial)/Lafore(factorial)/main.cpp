#include <iostream>
using namespace std;

int fact(int n){
    return n > 0 ? n * fact(n - 1) : 1 ;
}

int main() {
  
    int n;
    cin >> n;
    
    cout << fact(n) << endl;
    
    return 0;
}
