#include <iostream>
using namespace std;

int main(){
    int array[5] = {1, 2, 3, 4, 5};

    int temp = array[0]; // Store the first element

    for (int i = 0; i < 4; i++) {
        array[i] = array[i + 1]; // Shift elements to the left
    }
    array[4] = temp; // Place the first element at the end

    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
}