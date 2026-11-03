// Demonstration of a parameterized constructor
#include <iostream>
using namespace std;

class Student {
    int rollNumber;

public:
    Student(int r) {
        rollNumber = r;
    }

    void display() {
        cout << "Roll number: " << rollNumber << endl;
    }
};

int main() {
    Student s1(101);
    s1.display();
    return 0;
}
