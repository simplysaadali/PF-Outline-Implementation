#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    // reading data from test2 and the data is more than one line
    int age;
    string name;

    ifstream read;
    read.open("test2.txt", ios::in); // in means read mode

    while(getline(read, name) && (read >> age)){ // getline for string and >> for int
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        read.ignore();
    }
}