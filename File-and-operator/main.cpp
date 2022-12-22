#include <iostream>
#include <fstream>
#include <list>
#include <string>
using namespace std;


class Person{

public:
    string Name;
    string Surname;
    int Age;

public:
    Person(){}
    Person(string _name,string _surname,int _age){

        Name = _name;
        Surname = _surname;
        Age = _age;

    }

    friend ostream& operator << (ostream &s, Person &p);
    friend istream& operator >> (istream &s, Person &p);

};

ostream& operator << (ostream &s, Person &p){
    return s << p.Name << " " << p.Surname << " " << p.Age ;
}

istream& operator >> (istream &s, Person &p){

    cout << endl << "Enter fields:";

    s >> p.Name;

    s >> p.Surname;

    s >> p.Age;
    cout << endl;

    return s;

}


int main() {


    fstream fout;

    fout.open("File.txt" , ios::app );

    int arr[5] = {1,2,3,4,5};

    if(fout.is_open()){

        fout << '\n';

        for (int i = 0; i < 5; ++i) {
            fout << arr[i] << " ";
        }
    }

    fout.close();

    ifstream fin;
    fin.open("File.txt" , ios::in);

    int arr1[5];

    if(fin.is_open()){

        while(!fin.eof()){
            cout << endl << endl;
            for (int i = 0; i < 5; ++i) {
                fin >> arr1[i];
                cout << arr1[i] << endl;
            }
        }
    }

    fin.close();


    Person p1("Matvey", "kHODOS" , 19);
    Person p2;

    cout << p1;
    cin >> p2;
    cout << p2;

    return 0;
}
