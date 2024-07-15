#include <iostream>
using namespace std;
const int SIZE = 100;
void insertElement(int arr[], int &length, int element, int position) {
    if (position > length || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = length; i > position; --i) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    ++length;
}

void deleteElement(int arr[], int &length, int position) {
    if (position >= length || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = position; i < length - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    --length;
}

void updateElement(int arr[], int length, int position, int newElement) {
    if (position >= length || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    arr[position] = newElement;
}

void readElement(int arr[], int length, int position) {
    if (position >= length || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    cout << "Element at position " << position << " is: " << arr[position] << endl;
}

int main() {
    int arr[SIZE] = {4, 6, 7, 8};
    int length = 4;
    int choice, element, position;

    do {
        cout << "\nArray: ";
        cout << "\nMenu:\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element\n";
        cout << "3. Update Element\n";
        cout << "4. Read Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter element to insert: ";
            cin >> element;
            cout << "Enter position to insert (0 to " << length << "): ";
            cin >> position;
            insertElement(arr, length, element, position);
        } else if (choice == 2) {
            cout << "Enter position to delete (0 to " << length - 1 << "): ";
            cin >> position;
            deleteElement(arr, length, position);
        } else if (choice == 3) {
            cout << "Enter position to update (0 to " << length - 1 << "): ";
            cin >> position;
            cout << "Enter new element: ";
            cin >> element;
            updateElement(arr, length, position, element);
        } else if (choice == 4) {
            cout << "Enter position to read (0 to " << length - 1 << "): ";
            cin >> position;
            readElement(arr, length, position);
        } else if (choice == 5) {
            cout << "Exiting..." << endl;
        } else {
            cout << "Choose correctly" << endl;
        }
    } while (choice != 5);

    return 0;
}

