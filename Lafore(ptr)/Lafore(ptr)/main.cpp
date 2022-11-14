#include <iostream>
using namespace std;
#define MAX 10

void href(double &a){
     a *= 2.54;
}

void aptr(double *a){
     *a *= 2.54;
}

void work(int *arr){
    
    for (int i = 0; i < MAX; i++) {
        arr[i] *= 2;
    }
    
}

void arrsort(int *arr){
    
    for(int i = 0; i < MAX - 1 ;i++){
        for (int j = 0; j < MAX - i - 1; j++) {
            if(arr[j] > arr[j+1]){
                int tmp;
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    
    for (int i = 0; i < MAX; i++)
        cout << arr[i] << " ";
    cout << endl;
}



int main() {

    int var1 = 15 ,var2 = 17;

    cout << &var1 << endl;
    cout << &var2 << endl;

    int *ptr;

    ptr = &var1;
    cout << *ptr << endl;

    ptr = &var2;
    cout << *ptr << endl;

    int* a;
    float* b;

    void *ptr1;

    cout << &a << endl;
    cout << &b << endl;

    ptr1 = &a;
    cout << ptr1 << endl;
    ptr1 = &b;
    cout << ptr1 << endl;

    int arr[] = {1,2,3,45,6};

    cout << endl << endl;

    for(int i = 0; i < 5; i++){
        cout << *(arr+i) <<"\t" << arr+i << endl;
    }

    int *ptrArr = arr;

    for(int i = 0; i < 5; i++){
        cout << *(ptrArr++) << " ";
    }
    cout << endl;


    double ahref = 10;

    href(ahref);

    cout << ahref << endl;

    double Aptr = 10;

    aptr(&Aptr);

    cout << Aptr << endl;
    
    int arr2[MAX] = {0,3,1,2,5,-1,2,3,4,6};
  
    work(arr2);
    
    for (int i = 0; i < MAX; i++) {
        cout << arr2[i] << " ";
    }
    
    cout << endl;
    
    
    arrsort(arr2);
    
    return 0;
}
