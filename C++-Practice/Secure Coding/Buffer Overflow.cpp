#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int secretValue = 42;  // Target variable for exploitation

void vulnerableFunction() {
    char buffer[5];  

    cout << "Enter some text: ";
    cin >> buffer;  

    cout << "You entered: " << buffer << endl;
}

int main() {
    cout << "Before exploit: secretValue = " << secretValue << endl;

    vulnerableFunction();  

    cout << "After exploit: secretValue = " << secretValue << endl;  // Check if value changed

return 0;
}
