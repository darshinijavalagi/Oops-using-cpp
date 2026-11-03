// Simple example of a class and an object
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollNumber << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Darshini";
    s1.rollNumber = 1;
    s1.display();

    return 0;
}
