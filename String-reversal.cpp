#include <iostream>
#include <string>

using namespace std;

string reverseString(const string& input) {
    string reversedString;
    for (int i = input.length() - 1; i >= 0; --i) {
        reversedString += input[i];
    }
    return reversedString;
}

int main() {
    string inputString;
    
    cout << "Enter a string: ";
    getline(cin, inputString);

    string reversed = reverseString(inputString);
    
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
