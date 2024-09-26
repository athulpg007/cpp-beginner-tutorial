#include <iostream>

using namespace std;

class Movie {
    private:
        string rating;

public:
    string title;
    string director;

    Movie(string aTitle, string aDirector, string aRating) {
        title = aTitle;
        director = aDirector;
        set_rating(aRating);
    }

    void set_rating(string aRating) {
        string valid_ratings[] = {"P", "PG", "PG-13", "R", "NR"};

        for (int i = 0; i < size(valid_ratings); i++) {
            if (aRating == valid_ratings[i]) {
                rating = aRating;
                break;
            }
            rating = "NR";
        }
    }

    string get_rating() {
        return rating;
    }
};

int main18() {
    Movie avengers("The Avengers", "Joss Whedon", "PG-15");
    cout << avengers.get_rating() << endl;
    return 0;
}