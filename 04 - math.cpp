#include <iostream>
#include <cmath>

using namespace std;

double cube(double x) {
    return pow(x, 3);
}

int main() {
    cout << cube(6) << endl;
    return 0;
}