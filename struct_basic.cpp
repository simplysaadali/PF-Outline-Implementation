#include <iostream>
#include <string>
using namespace std;

struct employee{
    int EmpID;
    string Name;
    float salary;
    int age;
};

int main(){
    int employee_number;

    cout << "Enter number of employees: ";
    cin >> employee_number;

    employee emp1[employee_number];

    for(int i = 0; i < employee_number; i++){
        cout << "------------------Entering details for Employee " << (i + 1) << "------------------" << endl;

        cout << "Enter Employee ID: ";
        cin >> emp1[i].EmpID;
        cin.ignore(); // To ignore the newline character, used when followed by a getline/string input

        cout << "Enter Employee Name: ";
        getline(cin , emp1[i].Name);

        cout << "Enter Employee Salary: ";
        cin >> emp1[i].salary;

        cout << "Enter Employee Age: ";
        cin >> emp1[i].age;
        cin.ignore(); // Maybe the next input is a string/getline
    }

    cout << "------------------Employee Details Shown------------------" << endl;
    
    for(int i = 0; i < employee_number; i++){
        cout << "Employee " << (i + 1) << " Details:" << endl;
        cout << "Employee ID: " << emp1[i].EmpID << endl;
        cout << "Employee Name: " << emp1[i].Name << endl;
        cout << "Employee Salary: " << emp1[i].salary << endl;
        cout << "Employee Age: " << emp1[i].age << endl;
        cout << "----------------------------------------" << endl;
    }
}