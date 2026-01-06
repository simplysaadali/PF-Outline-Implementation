#include <iostream>
using namespace std;

int main(){

    // practice
    int initialize_array[3][3] = {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };

    // practice
    int null_array[5][5] = {0}; //all elements are initialized to 0
    
    int twoD_array1 [3][3];
    int twoD_array2 [3][3];
    int sum[3][3];

    // array 1 input
    cout << "Please enter the all elememnts of the array: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> twoD_array1[i][j];
        }
    }

    // array 2 input
    cout << "Please enter the all elememnts of the array: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> twoD_array2[i][j];
        }
    }

    // addition of both matrices
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            sum[i][j] = twoD_array1[i][j] + twoD_array2[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}