#include<iostream>
#include<vector>
#include<algorithm>
#include"sort.h"
using namespace std;
void mergeSort(vector<int>& arr);
void insertionSort(vector<int>& arr); 
void bubbleSort(vector<int>& arr);
void selectionSort(vector<int>& arr);
int main() {
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    cout << "Given Array:\n";
    display(arr);

    int choice;
    do {
        cout << "Choose sorting method:\n1. Bubble sort\n2. Selection sort\n3. Merge Sort\n4. Insertion Sort\n5. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                bubbleSort(arr);
                break;
            case 2:
                selectionSort(arr);
                break;
            case 3:
                mergeSort(arr);
                break;
            case 4:
                insertionSort(arr);
                break;
            case 5:
                cout << "Exiting..." << endl;
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "\nSorted Array:\n";
        display(arr);

        arr = {5, 2, 4, 6, 1, 3};
        cout << "\nArray reset to unsorted state for next demonstration:\n";
        display(arr);

    } while (true);

    return 0;
}

