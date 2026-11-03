// Demonstration of a friend function
#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) : value(v) {}

    friend void display(Number n);
};

void display(Number n) {
    cout << "Value: " << n.value << endl;
}

int main() {
    Number n1(25);
    display(n1);
    return 0;
}
