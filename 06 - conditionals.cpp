#include <iostream>


using namespace std;

void classify(char sex, bool isMarried) {
    if (tolower(sex) == 'm' && isMarried) {
        cout << "You are a married male." << endl;
    }
    else if (tolower(sex) == 'm' && !isMarried) {
        cout << "You are an unmarried male." << endl;
    }
    else if (tolower(sex) == 'f' && isMarried) {
        cout << "You are a married female." << endl;
    }
    else {
        cout << "You are an unmarried female." << endl;
    }
}

int main() {
    classify('M', true);
    classify('M', false);
    classify('F', true);
    classify('F', false); 
}