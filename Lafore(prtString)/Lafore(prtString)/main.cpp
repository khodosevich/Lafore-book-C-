#include <iostream>
using namespace std;

void copyarr(char* dest,const char* str){
    
    while(*str != '\0'){
        *dest++ = *str++;
    }

    *dest = '\0';
    
}

int main() {
  
    char str1[80];
    char* str = "Определение через указатель";
    

//    cout << str << endl;
//    cout << str1 << endl;
//    cout << str1 << endl;

    
    copyarr(str1, str);
    
    cout << str << endl;
    
    
    return 0;
}
