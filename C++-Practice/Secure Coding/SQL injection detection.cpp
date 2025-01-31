// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

bool isSQLInjection(const string& input) {
    string sqlKeywords[] = {"'", "--", ";", "DROP", "SELECT", "INSERT", "DELETE", "UPDATE", "UNION"};
    
    for (const string& keyword : sqlKeywords) {
        if (input.find(keyword) != string::npos) {
            return true;
        }
    }
    return false;
}

int main() {
    string username, password;

    cout << "Enter username: ";
    getline(cin, username);
    cout << "Enter password: ";
    getline(cin, password);

    if (isSQLInjection(username) || isSQLInjection(password)) {
        cout << "SQL Injection attempt detected! Access denied.\n";
    } else {
        cout << "Login successful! (Simulated)\n";
    }

    return 0;
}
