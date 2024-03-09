#include <iostream>

using namespace std;

// Function to perform bubble sort in ascending order
void bubbleSortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform bubble sort in descending order
void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    char order;

    // Prompt the user to input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int *arr = new int[size];

    // Prompt the user to input array elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Prompt the user to choose the sorting order
    cout << "Enter 'A' for ascending order or 'D' for descending order: ";
    cin >> order;

    // Perform sorting based on the user's choice
    if (order == 'A') {
        bubbleSortAscending(arr, size);
        cout << "Array sorted in ascending order:" << endl;
    } else if (order == 'D') {
        bubbleSortDescending(arr, size);
        cout << "Array sorted in descending order:" << endl;
    } else {
        cout << "Invalid input for sorting order." << endl;
        return 1;
    }

    // Display the sorted array
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}
