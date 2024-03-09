#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string sourceFileName, destinationFileName;
    string line;

    // Prompt the user to input source and destination file names
    cout << "Enter the name of the source file: ";
    getline(cin, sourceFileName);

    cout << "Enter the name of the destination file: ";
    getline(cin, destinationFileName);

    // Open the source file for reading
    ifstream sourceFile(sourceFileName);
    if (!sourceFile.is_open()) {
        cerr << "Error: Unable to open source file." << endl;
        return 1;
    }

    // Open the destination file for writing
    ofstream destinationFile(destinationFileName);
    if (!destinationFile.is_open()) {
        cerr << "Error: Unable to open destination file." << endl;
        return 1;
    }

    // Copy contents from source file to destination file
    while (getline(sourceFile, line)) {
        destinationFile << line << endl;
    }

    // Close files
    sourceFile.close();
    destinationFile.close();

    cout << "File copied successfully." << endl;

    return 0;
}
