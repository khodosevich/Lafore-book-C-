#include <iostream>
using namespace std;

class Stack{
private:
    enum{MAX = 10};
    int st[MAX];
    int top;
    
public:
    
    Stack(){
        top = 0;
    }
    
    void push(int x){
        st[++top] = x;
    }
    
    int pop(){
        return st[top--];
    }
    
    
    void getStack(){
        while (top != 0) {
            cout << st[top] << " ";
            top--;
        }
    }
    
};

int main() {

    Stack s1;
    
    s1.push(55);
    s1.push(66);
    cout <<  s1.pop() << endl;
    
    s1.push(99);
    s1.push(10);
    s1.push(5);
    s1.push(6);
    
    cout << endl;
    
    s1.getStack();
    
    cout << endl;
    
    return 0;
}
