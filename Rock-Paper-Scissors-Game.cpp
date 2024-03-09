#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Array of choices
    string choices[] = {"rock", "paper", "scissors"};

    // Generate a random choice for the computer
    int computerChoiceIndex = rand() % 3;
    string computerChoice = choices[computerChoiceIndex];

    // Prompt the user to choose
    string userChoice;
    cout << "Enter your choice (rock, paper, scissors): ";
    cin >> userChoice;

    // Convert user choice to lowercase
    transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::tolower);

    // Determine the winner
    string result;
    if (userChoice == "rock") {
        if (computerChoice == "rock") {
            result = "It's a tie!";
        } else if (computerChoice == "paper") {
            result = "Computer wins!";
        } else { // computerChoice == "scissors"
            result = "You win!";
        }
    } else if (userChoice == "paper") {
        if (computerChoice == "rock") {
            result = "You win!";
        } else if (computerChoice == "paper") {
            result = "It's a tie!";
        } else { // computerChoice == "scissors"
            result = "Computer wins!";
        }
    } else if (userChoice == "scissors") {
        if (computerChoice == "rock") {
            result = "Computer wins!";
        } else if (computerChoice == "paper") {
            result = "You win!";
        } else { // computerChoice == "scissors"
            result = "It's a tie!";
        }
    } else {
        result = "Invalid choice!";
    }

    // Display the result
    cout << "Computer's choice: " << computerChoice << endl;
    cout << "Result: " << result << endl;

    return 0;
}
