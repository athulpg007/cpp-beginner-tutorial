#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sq[5];
    for (int i = 0; i < 5; i++) {
        sq[i] = arr[i] * arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Squared array: ";
    for (int i = 0; i < 5; i++) {
        cout << sq[i] << " ";
    }
    cout << endl;

    return 0;

}