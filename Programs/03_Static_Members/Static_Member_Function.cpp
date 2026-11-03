// Demonstration of a static member function
#include <iostream>
using namespace std;

class Counter {
    static int count;

public:
    static void showCount() {
        cout << "Count: " << count << endl;
    }

    void increment() {
        count++;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2;
    c1.increment();
    c2.increment();
    Counter::showCount();
    return 0;
}
