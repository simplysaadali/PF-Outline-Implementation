#include <iostream>
using namespace std;

int grade(int marks){
    if (marks >=50){
        return 1;
    }
    else{
        return 0;
    }
}

struct Student{
    int rollNo;
    int marks;
};

int main(){
    Student stu[5];
    int passCount = 0, failCount = 0;

    for (int i=0; i<5; i++){
        cout << "Enter roll number of student " << i+1 << ": ";
        cin >> stu[i].rollNo;
        cout << "Enter marks of student " << i+1 << ": ";
        cin >> stu[i].marks;
        
        if (grade(stu[i].marks) == 1){
            passCount++;
        }else{
            cout << endl << "Student " << stu[i].rollNo << " has failed." << endl;
            failCount++;
        }
    }

    cout << "Total Passed Students: " << passCount << endl;
    cout << "Total Failed Students: " << failCount << endl;
}