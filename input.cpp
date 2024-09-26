#include <iostream>

using namespace std;

int main1() {
    int age;
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "! " << "You are " << age << " years old." << endl;

    return 0;
}