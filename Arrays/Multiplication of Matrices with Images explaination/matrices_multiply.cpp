#include <iostream>
using namespace std;

int main(){    
    int A [3][3];
    int B [3][3];
    int sum[3][3];

    // array A input
    cout << "Please enter the all elememnts of the 1st array: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    // array B input
    cout << "Please enter the all elememnts of the 2nd array: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> B[i][j];
        }
    }

    // Multiplication of both matrices.
    int mult[3][3] = {0};
    for (int i =0; i<3; i++){
        for (int j=0; j<3; j++){
            mult[i][j] = 0;
            for (int k = 0; k < 3; k++){
                mult[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Displaying the multiplication result
    cout << "Result of Matrix Multiplication: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }
}