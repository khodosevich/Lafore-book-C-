#include <iostream>
using namespace std;

int main() {
    
    long devidend, divisor = 0;
    char ch;
    do{
        cout << "Enter devidend: ";
        cin >> devidend;
        

        cout << "Enter divisor: ";
        cin >> divisor;
        
       
        cout << "Results devidend % divisor: " << devidend % divisor << endl;
        
        
        cout << "One more? (y/n): ";
        cin >> ch;
        
    }while(ch != 'n');
    
    return 0;
}
