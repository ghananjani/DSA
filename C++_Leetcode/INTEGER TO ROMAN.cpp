//https://leetcode.com/problems/integer-to-roman/

class Solution {
public:
    string intToRoman(int num) {
        // List of Roman numeral symbols with their values, ordered from highest to lowest
        vector<pair<int, string>> val_to_roman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };
        
        // Initialize an empty result string
        string roman_numeral = "";
        
        // Iterate through each (value, symbol) pair
        for (const auto& [value, symbol] : val_to_roman) {
            while (num >= value) {
                roman_numeral += symbol;  // Append symbol to the result
                num -= value;             // Decrease num by value
            }
        }
        
        return roman_numeral;
    }
};
