#include <iostream>
#include"list.h"
using namespace std;
int main() {
    List L;
    int choice;
    string item;
    int index;
    string newValue;
    do {
        cout << "\t\t\t\tMENU:" << endl;
        cout << "1. Find an item " << endl;
        cout << "2. Get value at a subscript " << endl;
        cout << "3. Insert an item " << endl;
        cout << "4. Delete an item " << endl;
        cout << "5. Update an item " << endl;
        cout << "6. Print out the items in the list " << endl;
        cout << "7. Exit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the item to find: " << endl;
            cin >> item;
            L.find(item);
        }

        if (choice == 2)
        {
            cout << "Enter the subscript: " << endl;
            cin >> index;
            cout << "Value at subscript " << index << ": " << L.getValue(index) << endl;
        }

        if (choice == 3)
        {
            cout << "Enter the item to insert: " << endl;
            cin >> item;
            L.insert(item);
        }

        if (choice == 4)
        {
            cout << "1. Delete first element " << endl;
            cout << "2. Delete last element " << endl;
            cout << "3. Delete any value " << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            if (choice == 1)
                L.deleteFirst();
            if (choice == 2)
                L.deleteLast();
            if (choice == 3)
            {
                cout << "Enter the item to delete: " << endl;
                cin >> item;
                L.deleteAny(item);
            }

        }
        if (choice == 5)
        {
            cout << "Enter the subscript to update: " << endl;
            cin >> index;
            cout << "Enter the new value: " << endl;
            cin >> newValue;
            L.update(index, newValue);
        }
        if (choice == 6)
        {
            L.Display();
        }
        if (choice == 7)
        {
            cout << "Exiting the program. " << endl;
        }
    } while (choice != 7);

    return 0;
}