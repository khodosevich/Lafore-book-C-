#include <iostream>
using namespace std;


class link{
public:
    int data;
    link* next;
};


class linklist{
private:
    link *first;
    
public:
    linklist(){first = nullptr;}
    
    void addel(int _data){
        link *newlink = new link;
        newlink->data = _data;
        newlink->next = first;
        first = newlink;
    }
    
    void getel(){
        
        link *current = first;
        while (current) {
            cout << current->data << endl;
            current = current->next;
        }
        
    }
    
};


int main() {
 
    linklist List;
    
    List.addel(12);
    List.addel(13);
    List.addel(14);
    List.addel(15);
    
    List.getel();
    
    return 0;
}
