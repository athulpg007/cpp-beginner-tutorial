#include <iostream>

using namespace std;

int max(int x, int y, int z);

int main() {
    cout << max(1, 2, 4) << endl;
    return 0;
}

int max(int x, int y, int z) {
    int result;
    if (x >= y && y >= z) {
        result = x;
    }
    else if (y >= x && y >= z) {
        result = y;
    }
    else {
        result = z;
    }
    return result;
}