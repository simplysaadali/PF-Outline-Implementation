#include <iostream>
#include <string>
using namespace std;

int main(){
    string name1;
    string name2;

    cout << "Please enter your first name: ";
    getline(cin, name1);
    cout << "Please enter your last name: ";
    getline(cin, name2);

    string full_name = name1 + " " + name2;
    cout << "Your full name is: " << full_name << endl;

    cout << name1.length() << endl;
    cout << name2.length() << endl;

    cout << name1[0];
    return 0;
}