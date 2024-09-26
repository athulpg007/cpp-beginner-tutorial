#include <iostream>

using namespace std;

int main10() {
    int secret = 7;
    int guess;

    do {
        cout << "Enter a number: ";
        cin >> guess;
    } while (guess != secret);
    cout << "You win." << endl;
    return 0;
}