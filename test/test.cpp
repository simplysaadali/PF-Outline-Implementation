#include <iostream>
using namespace std;

// Function to input a single matrix in case of transpose
void inputSingleMatrix(int arr[100][100], int rows, int cols) {
    
    cout << "\nEnter elements of the matrix:\n";
    
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];
            
}

// Function to input two matrices (same size), only oce rows columns take adn used for both matrices

void inputTwoMatrices(int A[100][100], int B[100][100], int rows, int cols) {
    
    cout << "\nEnter elements of 1st matrix:\n";
    
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> A[i][j];

    cout << "\nEnter elements of 2nd matrix:\n";
    
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> B[i][j];
}


// Function to transpose a matrix

void transposeMatrices(int rows, int cols) {
    
    int A[100][100];
    inputSingleMatrix(A, rows, cols);    //calling function to get the values

    int transpose[100][100];
    
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transpose[j][i] = A[i][j];

    cout << "\nTranspose of the matrix:\n";
    
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            cout << transpose[i][j] << " ";
        cout << endl;
    }
    
}

// Function to add two matrices

void addMatrices(int rows, int cols) {
    
    int A[100][100], B[100][100], C[100][100];
    inputTwoMatrices(A, B, rows, cols);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C[i][j] = A[i][j] + B[i][j];


    cout << "\nSum of two matrices:\n";
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    
}


// Function to subtract two matrices

void subtractMatrices(int rows, int cols) {
    
    int A[100][100], B[100][100], C[100][100];
    inputTwoMatrices(A, B, rows, cols);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C[i][j] = A[i][j] - B[i][j];

    cout << "\nDifference of two matrices (A - B):\n";
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    
}

// Function to multiply two matrices

void multiplyMatrices(int rows1, int cols1, int rows2, int cols2) {
    
    int A[100][100], B[100][100], C[100][100];

    cout << "\nEnter elements of 1st matrix:\n";
    
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            cin >> A[i][j];

    cout << "\nEnter elements of 2nd matrix:\n";
    
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            cin >> B[i][j];

    if (cols1 != rows2) {
        cout << "\nMatrix multiplication NOT possible!\n";
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < cols1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    cout << "\nProduct of the matrices:\n";
    
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    
}

// Function to divide two matrices element-wise

void divideMatrices(int rows, int cols) {
    
    int A[100][100], B[100][100];
    float C[100][100];

    inputTwoMatrices(A, B, rows, cols);

    cout << "\nDividing matrices element-wise...\n";

    // Division loop
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (B[i][j] == 0)
                C[i][j] = 0;  
            else
                C[i][j] = (float)A[i][j] / B[i][j];
        }
    }

    cout << "\nResult of division (A / B):\n";
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    
}

int main() {
    int rows, cols;
    int choice;

main_menu:
    cout << "Select operation:\n";
    cout << "1. Transpose\n";
    cout << "2. Sum of two matrices\n";
    cout << "3. Subtraction of two matrices\n";
    cout << "4. Multiplication of two matrices\n";
    cout << "5. Division of two matrices (element-wise)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice < 1 || choice > 5) {
        cout << "Invalid choice! Try again.\n";
        goto main_menu;
    }

    if (choice == 4) {
        int r1, c1, r2, c2;
        cout << "Enter rows of 1st matrix: ";
        cin >> r1;
        cout << "Enter columns of 1st matrix: ";
        cin >> c1;

        cout << "Enter rows of 2nd matrix: ";
        cin >> r2;
        cout << "Enter columns of 2nd matrix: ";
        cin >> c2;

        multiplyMatrices(r1, c1, r2, c2);
    }
    else {
        cout << "Enter number of rows: ";
        cin >> rows;
        
        cout << "Enter number of columns: ";
        cin >> cols;

        if (choice == 1)
            transposeMatrices(rows, cols);
            
        else if (choice == 2)
            addMatrices(rows, cols);
            
        else if (choice == 3)
            subtractMatrices(rows, cols);
            
        else if (choice == 5)
            divideMatrices(rows, cols);
    }

    return 0;
}

