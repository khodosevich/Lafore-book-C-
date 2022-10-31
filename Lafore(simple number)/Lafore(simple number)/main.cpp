#include <iostream>
using namespace std;


int main() {
    
    long n,j;
    
    cout << "Enter number: ";
    cin >> n;
    
    for (j = 2; j <= n / 2; j++) {
        if(n%j == 0){
            cout << "Dont simple number; number divide on " << j << endl;
            return 0;
        }
    }

    cout << "Number is simple" << endl;
    
    return 0;
}
