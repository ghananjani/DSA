#include <iostream>
#include <new> // Required for std::bad_alloc

using namespace std;

int main() {
    try {
        int* arr = new int[1000000000000];  // Trying to allocate a huge array
    }
    catch (bad_alloc &e) {  // Catching bad_alloc exception
        cout << "Memory allocation failed: " << e.what() << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}
