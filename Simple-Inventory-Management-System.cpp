#include <iostream>
#include <string>

using namespace std;

// Struct to represent an inventory item
struct InventoryItem {
    int id;
    string name;
    int quantity;
    double price;
};

// Function to add an item to the inventory
void addItem(InventoryItem inventory[], int& itemCount) {
    cout << "Enter item ID: ";
    cin >> inventory[itemCount].id;

    cout << "Enter item name: ";
    cin.ignore();
    getline(cin, inventory[itemCount].name);

    cout << "Enter quantity: ";
    cin >> inventory[itemCount].quantity;

    cout << "Enter price: ";
    cin >> inventory[itemCount].price;

    ++itemCount;
}

// Function to display all items in the inventory
void displayInventory(const InventoryItem inventory[], int itemCount) {
    cout << "Inventory:" << endl;
    for (int i = 0; i < itemCount; ++i) {
        cout << "ID: " << inventory[i].id << ", Name: " << inventory[i].name << ", Quantity: " << inventory[i].quantity << ", Price: $" << inventory[i].price << endl;
    }
}

// Function to search for an item by name
void searchByName(const InventoryItem inventory[], int itemCount) {
    string searchName;
    cout << "Enter item name to search: ";
    cin.ignore();
    getline(cin, searchName);

    bool found = false;
    for (int i = 0; i < itemCount; ++i) {
        if (inventory[i].name == searchName) {
            cout << "Item found: ID: " << inventory[i].id << ", Quantity: " << inventory[i].quantity << ", Price: $" << inventory[i].price << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Item not found." << endl;
    }
}

// Function to search for an item by ID
void searchById(const InventoryItem inventory[], int itemCount) {
    int searchId;
    cout << "Enter item ID to search: ";
    cin >> searchId;

    bool found = false;
    for (int i = 0; i < itemCount; ++i) {
        if (inventory[i].id == searchId) {
            cout << "Item found: Name: " << inventory[i].name << ", Quantity: " << inventory[i].quantity << ", Price: $" << inventory[i].price << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Item not found." << endl;
    }
}

int main() {
    const int MAX_ITEMS = 100;
    InventoryItem inventory[MAX_ITEMS];
    int itemCount = 0;
    char choice;

    do {
        cout << "\n1. Add item\n2. Display inventory\n3. Search by name\n4. Search by ID\n5. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                if (itemCount < MAX_ITEMS) {
                    addItem(inventory, itemCount);
                } else {
                    cout << "Inventory is full." << endl;
                }
                break;
            case '2':
                displayInventory(inventory, itemCount);
                break;
            case '3':
                searchByName(inventory, itemCount);
                break;
            case '4':
                searchById(inventory, itemCount);
                break;
            case '5':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '5');

    return 0;
}
