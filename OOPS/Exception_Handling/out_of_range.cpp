#include <iostream>
#include <vector>
#include <stdexcept>  // For out_of_range
using namespace std;

int main() {
    try {
        vector<int> nums = {1, 2, 3};
        cout << nums.at(5) << endl;  // Invalid index
    }
    catch (out_of_range &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
