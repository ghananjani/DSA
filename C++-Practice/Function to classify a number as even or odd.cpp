#include <iostream>

// Function to classify a number as even or odd
void classifyEvenOdd(int number) {
    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }
}

int main() {
    int num;
    
    std::cout << "Enter an integer: ";
    std::cin >> num;
    
    classifyEvenOdd(num);
    
    return 0;
}
