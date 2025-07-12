#include <iostream>

using namespace std;

int main7() {
    bool isMale = true;
    bool isTall = false;

    if (isMale && isTall) {
        cout << "You are a tall male." << endl;
    }
    else if (isMale && !isTall) {
        cout << "You are not a tall male." << endl;
    }
    else if (!isMale && isTall) {
        cout << "You are a tall female." << endl;
    }
    else {
        cout << "You are not tall female." << endl;
    }
    return 0;
}
