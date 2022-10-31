#include <iostream>
using namespace std;


int main() {
    
    int next = 0 , last = 1;
    int n;
    
    cout << "Enter number" << endl;
    cin >> n;
    
    int sum;
    while (n != 0) {
        
        cout << last << " ";
        sum = next + last;
        
        next = last;
        last = sum;
        
        n--;
        
    }
    
    cout << endl;
   
    return 0;
}
