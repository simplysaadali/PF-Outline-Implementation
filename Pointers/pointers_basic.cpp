#include <iostream>
using namespace std;

void change(int a){ // pass by value/direct method
    a = 20;
}

void changeA(int *ptr){ // pass by reference using pointers
    *ptr = 20;
}

int main(){
    int a = 10;

    cout << "Before change function, a = " << a << endl;
    change(a);
    cout << "After change function, a = " << a << endl;

    
    // call by reference using pointers
    cout << "Before changeA function, a = " << a << endl;
    changeA(&a); //indrectly changing the value of a variable using pointers and call by reference in main function
    cout << "After changeA function, a = " << a << endl;
}