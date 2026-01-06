#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main(){
    char name[] = {'S', 'a', 'a', 'd', '\0'};
    string str_name = "Saad";

    // strlen = string length
    cout << str_name.length() << endl;
    cout << strlen(name) << endl;

    // strcpy = sting copy
    char arrayCpy1[] = "Testing";
    char arrayCpy2[20]; //it will take 8 bytes, not seven, due to null character \0

    strcpy(arrayCpy2, arrayCpy1); 
    cout << "Copied array 1 into 2 is: " << arrayCpy2 << endl;

    // strcmp = string compare
    char arrayCmp1[] = "University";
    char arrayCmp2[] = "University";
    char arrayCmp3[] = "College";

    int  same_final_result = strcmp(arrayCmp1, arrayCmp2);

    if (same_final_result == 0){
        cout << "The two strings are equal." << endl;
    } else if (same_final_result < 0){
        cout << "ArrayCmp1 is less than ArrayCmp2." << endl;
    } else {
        cout << "ArrayCmp1 is greater than ArrayCmp2." << endl;
    }

    cout << same_final_result << endl;
    
    int diff_final_result1 = strcmp(arrayCmp1, arrayCmp3); // positive value
    int diff_final_result2 = strcmp(arrayCmp3, arrayCmp1); // negative value

    cout << "Greater value as string 1 is greater/positive: " <<diff_final_result1 << endl;
    cout << "Lesser value as string 1 is lesser/negative: " << diff_final_result2 << endl;

    // strcat = string concatenate
    char arrayCat1[15] = "Hello ";
    char arrayCat2[] = "World!";
    char nameCat[] = "Saad";

    strcat(arrayCat1, arrayCat2);
    cout << endl << "After concatenation of testing: " << arrayCat1 << endl;

    strcat(nameCat, " ");
    strcat(nameCat, "Ali");
    cout << "After concatenation of name: " << nameCat << endl;

    return 0;
}