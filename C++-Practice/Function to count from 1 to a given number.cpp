#include <iostream>

// Function to count from 1 to a given number
void countingProgram(int n) {
    for (int i = 1; i <= n; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    int num;
    
    std::cout << "Enter a number to count up to: ";
    std::cin >> num;
    
    countingProgram(num);
    
    return 0;
}
