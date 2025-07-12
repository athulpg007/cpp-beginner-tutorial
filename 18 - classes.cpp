#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

int main15() {
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 156;

    Book book2;
    book1.title = "Lord of the Rings";
    book1.author = "Tolkein";
    book1.pages = 700;

    cout << book1.title << " " << book1.author << " " << book1.pages << endl;
    cout << book2.title << " " << book2.author << " " << book2.pages << endl;
    return 0;
}
