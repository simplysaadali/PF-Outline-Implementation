#include <iostream>
using namespace std;

void min_max(int arr[], int size){
    int max = arr[0];
    int min = arr[0];

    for (int i=0; i<size; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
}

int main (){
    int array[10];
    int sum = 0, avg = 0;
    int count_same = 0;

    for (int i = 0; i < 10; i++){
        cout << "Please enter the " << i + 1 << " number: ";
        cin >> array[i];
        sum = sum + array[i];
        if( i > 0 && (array[i] == array[i-1])){
            count_same++;
        }
    }
    
    avg = sum / 10;

    if(count_same > 0)
        cout << "You entered " << count_same << " same number(s)." << endl;

    cout << endl << "The sum of the numbers you entered is: " << sum << endl;
    cout << "The average of the numbers you entered is: " << avg << endl;
    min_max(array, 10);

    return 0;
}