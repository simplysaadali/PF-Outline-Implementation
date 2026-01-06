#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x = time(0); // get the current time
    srand(x);   //this will cjust the seed of the random number generator

    // the rand function can't give us random values, it fakes, you'll get the same number every time
    // also known as psuedo-random number generator
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    return 0;
}