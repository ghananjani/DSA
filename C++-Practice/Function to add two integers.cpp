#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    
    int sum = add(num1, num2);
    
    std::cout << "The sum is: " << sum << std::endl;
    
    return 0;
}
