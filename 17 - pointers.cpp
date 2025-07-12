#include <iostream>

using namespace std;

int main() {
    int age = 19;
    int *pAge = &age;
    double gpa = 3.9;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << "Age: " << age << endl;
    cout << "Pointer to age: " << pAge << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Pointer to GPA: " << pGpa << endl;
    cout << "Name: " << name << endl;
    cout << "Pointer to name: " << pName << endl;

    cout << *pAge << endl;
    cout << *pGpa << endl;
    cout << *pName << endl;

    return 0;
}