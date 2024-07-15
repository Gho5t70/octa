#include<iostream>
using namespace std;

// Find the number of pairs of integers in an array whose sum is equal to the given value
int main() {
    int a[5] = {1, 4, 2, 3, 8};
    int value = 5;
    int count = 0;
    
    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Target sum: " << value << endl;
    cout << "Pairs with sum " << value << ": " << endl;

    // Pick the first element of the pair along with a[i]
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (a[i] + a[j] == value) {
                count++;
                cout << "(" << a[i] << ", " << a[j] << ")" << endl;
            }
        }
    }

    cout << "The count of pairs with sum " << value << " is " << count << endl;
    return 0;
}

