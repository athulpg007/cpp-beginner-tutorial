#include <iostream>

using namespace std;

void sayHi(string name, int age);

int main5() {
    sayHi("Mike", 20);
    sayHi("Steve", 19);
    return 0;
}

void sayHi(string name, int age) {
    cout << "Hello " << name << ", You are " << age << " years old." << endl;
}

