# include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

        Book(){
            title = "No Title";
            author = "No Author";
            pages = 0;
        }
};

int main() {
    Book book1("Harry Potter", "JK Rowling", 465);
    Book book2("Lord of the Rings", "Tolkein", 720);
    Book book3;

    cout << book1.title << " " << book1.author << " " << book1.pages << endl;
    cout << book2.title << " " << book2.author << " " << book2.pages << endl;
    cout << book3.title << endl;
    return 0;
}

