// Demonstration of a static data member
#include <iostream>
using namespace std;

class Student {
public:
    static int count;

    Student() {
        count++;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2, s3;
    cout << "Number of objects: " << Student::count << endl;
    return 0;
}
