#include <iostream>
#include <string>
using namespace std;

struct Member{
    int id;
    string name;
    int age;
};

int main(){
    // simpe struct
    Member m1;
    m1.id = 1;
    m1.name = "Saad";
    m1.age = 20;

    // strcut with pointer
    Member* ptrM = &m1;
    ptrM ->age = 21; // updating age using pointer

    cout << "ID: " << ptrM->id<< endl;
    cout << "Name: " << ptrM->name << endl;
    cout << "Age: " << ptrM->age << endl; //this access the whole struct up there, and updatedonly age

    /*where ptrM -> age = (*ptrM).age, means it is a short way to use that
    Also there (ptrM) has memory address of m1 struct,
    and we're using with * to access the whole struct, not address */
}