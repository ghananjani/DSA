#include <iostream>
#include <stdexcept>  // For overflow_error
using namespace std;

int main() {
    try {
        int num = 2147483647;  // Max value for int
        if (num + 1 < num) {
            throw overflow_error("Integer overflow occurred!");
        }
        cout << "Result: " << num + 1 << endl;
    }
    catch (overflow_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}
