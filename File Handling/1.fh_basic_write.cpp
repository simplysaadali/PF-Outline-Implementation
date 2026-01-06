#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    // creating and writing data in a file
    string name;
    int age;

    ofstream write;
    write.open("test1.txt");

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    write << name << endl << age << endl;

    write.close();

    return 0;
}