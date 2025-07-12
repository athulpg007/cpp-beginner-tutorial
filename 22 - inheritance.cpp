#include <iostream>

using namespace std;

class Chef {
public:
    void makeChicken() {
        cout << "Chef makes Chicken" << endl;
    }
    void makeSalad() {
        cout << "Chef makes Salad" << endl;
    }
    void makeDessert() {
        cout << "Chef makes Dessert" << endl;
    }
};

class ItalianChef : public Chef {
public:
    void makePasta() {
        cout << "Chef makes Pasta" << endl;
    }
    void makeDessert() {
        cout << "Chef makes Italian Dessert" << endl;
    }

};

int main() {
    Chef chef;
    chef.makeChicken();

    ItalianChef italianChef;
    italianChef.makePasta();
    italianChef.makeDessert();
    return 0;
}