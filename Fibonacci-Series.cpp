#include <iostream>

using namespace std;

int main() {
    int numTerms;

    // Input number of terms
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> numTerms;

    // Fibonacci series generation
    int firstTerm = 0, secondTerm = 1;
    cout << "Fibonacci Series up to " << numTerms << " terms: ";
    for (int i = 0; i < numTerms; ++i) {
        if (i < 2) {
            cout << i << " ";
        } else {
            int nextTerm = firstTerm + secondTerm;
            cout << nextTerm << " ";
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
    }
    cout << endl;

    return 0;
}
