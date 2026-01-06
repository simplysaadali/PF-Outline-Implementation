#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    // reading data from the same file created in previous program file
    string name;
    int age;

    ifstream read;
    read.open("test1.txt");

    read >> name >> age;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    read.close();
    return 0;
}