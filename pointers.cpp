#include <iostream>

using namespace std;

int main14() {
    int age = 19;
    int *pAge = &age;
    double gpa = 3.9;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << *pAge << endl;

    return 0;
}