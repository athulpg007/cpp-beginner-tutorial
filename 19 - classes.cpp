#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        int age;

        Student(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void setGPA(double gpa) {
            this->gpa = gpa;
        }

        double getGPA() {
            return gpa;
        }

        void displayInfo() {
            cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << endl;
        }
    private:
        double gpa;
    
};

int main() {
    Student student1("Alice", 20);
    student1.setGPA(3.8);
    student1.displayInfo();

    Student student2("Bob", 22);
    student2.setGPA(3.5);
    student2.displayInfo();

    return 0;
}