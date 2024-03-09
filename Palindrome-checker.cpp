#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to remove spaces and punctuation from a string
string removeSpacesAndPunctuation(const string& str) {
    string result;
    for (char ch : str) {
        if (isalnum(ch)) {
            result += tolower(ch);
        }
    }
    return result;
}

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    string cleanStr = removeSpacesAndPunctuation(str);
    string reversedStr = cleanStr;
    reverse(reversedStr.begin(), reversedStr.end());
    return cleanStr == reversedStr;
}

int main() {
    string input;

    // Prompt user to input a word or phrase
    cout << "Enter a word or phrase to check if it's a palindrome: ";
    getline(cin, input);

    // Check if the input is a palindrome
    if (isPalindrome(input)) {
        cout << "Yes, '" << input << "' is a palindrome." << endl;
    } else {
        cout << "No, '" << input << "' is not a palindrome." << endl;
    }

    return 0;
}
