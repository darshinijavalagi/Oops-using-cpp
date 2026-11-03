// Demonstration of single inheritance
#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "I am a person." << endl;
    }
};

class Student : public Person {
public:
    void showStudent() {
        cout << "I am a student." << endl;
    }
};

int main() {
    Student s;
    s.showPerson();
    s.showStudent();
    return 0;
}
