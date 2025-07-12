#include <iostream>
#include <cassert>

using namespace std;

int SECRET = 7;
int GUESS;

int main() {
    cout << "Guess the secret number (between 1 and 10): ";
    cin >> GUESS;
    assert(GUESS >= 1 && GUESS <= 10);
    if (GUESS == SECRET) {
        cout << "Congratulations! You guessed the secret number!" << endl;
    } else {
        cout << "Sorry, that's not the secret number. Try again!" << endl;
    }
}