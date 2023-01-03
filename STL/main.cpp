#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;


void print(int x){

    cout << x << " ";

}


int main() {


    list<int> list = {1,2,3,4,5};

    auto iter = list.begin();

    for (; iter != list.end() ; iter++) {

        cout << *iter << " ";

    }

    cout << endl;

    auto riter = list.rbegin();

    for (;  riter != list.rend() ; riter++) {

        cout << *riter << " ";
    }

    list.sort();

    cout << endl << "for_each:" << endl;
    for_each(list.begin(),list.end(),print );


    vector<int> vector;

    for (int i = 0; i < 10; ++i) {

        vector.push_back(i);

    }

    cout<< endl << "vector" << endl;
    for (auto iter1 = vector.begin();  iter1 != vector.end() ; iter1++) {
        cout << *iter1 << " ";
    }

    cout << endl << "vector for_each" << endl;
    for_each(vector.begin(),vector.end(), print);

    reverse(vector.begin(), vector.end());

    cout << endl << "vector for_each" << endl;
    for_each(vector.begin(),vector.end(), print);

    cout << endl << "vector[4]: " << vector[4] << endl;


    cout << "Find:" << endl;

     auto p = find(vector.begin(),vector.end(),88);


     if(p != vector.end() ){
         cout << "Element found!" << endl;
     }
     else{
         cout << "Element not found!" << endl;
     }
     

    return 0;
}
