#include <iostream>

// Function to calculate factorial of a number
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate nCr
unsigned long long nCr(int n, int r) {
    if (r > n) {
        return 0; // nCr is 0 when r > n
    }
    unsigned long long numerator = factorial(n);
    unsigned long long denominator = factorial(r) * factorial(n - r);
    return numerator / denominator;
}

int main() {
    int n, r;
    
    std::cout << "Enter n and r: ";
    std::cin >> n >> r;
    
    std::cout << "nCr(" << n << ", " << r << ") = " << nCr(n, r) << std::endl;
    
    return 0;
}
