#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors() {
            if (gpa >= 3.5) {
                return true;
            }
            return false;
        }
};

int main() {
    Student student1("Jim", "Business", 3.4);
    cout << student1.hasHonors() << endl;
    Student student2("Pam", "Engineering", 3.7);
    cout << student2.hasHonors() << endl;
    return 0;
}