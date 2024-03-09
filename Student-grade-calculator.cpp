#include <iostream>

using namespace std;

int main() {
    int numSubjects;
    double totalGrade = 0.0;

    // Prompt the user to enter the number of subjects
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    // Input grades for each subject and calculate total grade
    for (int i = 1; i <= numSubjects; ++i) {
        double grade;
        cout << "Enter the grade for subject " << i << ": ";
        cin >> grade;
        totalGrade += grade;
    }

    // Calculate average grade
    double averageGrade = totalGrade / numSubjects;

    // Display the average grade to the user
    cout << "Average grade: " << averageGrade << endl;

    return 0;
}
