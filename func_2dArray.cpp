#include <iostream>
using namespace std;

void display2DArray(int array[100][100], int rows, int cols) {
    cout << "The elements of the array are:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void input2DArray(int array[100][100], int rows, int cols) {
    cout << "Enter elements of the array:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }
    display2DArray(array, rows, cols);
}

int main(){
    // taking input using a user defined function
    // length according to the choice of the user
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int array[100][100];

    input2DArray(array, rows, cols);
}