#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    /*previous programs deletes the previous data and overwrites.
    In this program we'll write to a file without deleting previous data. 
    we'll use append mode in the file*/

    int age;
    string name;

    ofstream write;
    write.open("test2.txt", ios::out | ios::app); //app is used to append data, out means write mode

    cout << "Enter your name: ";
    getline(cin, name); 

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();

    write << name << endl << age << endl;

    write.close();
    return 0;
}