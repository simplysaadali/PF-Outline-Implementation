#include <iostream>
using namespace std;

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < n / 2; i++) {
        int temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}