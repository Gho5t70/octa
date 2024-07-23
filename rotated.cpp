#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& arr) {
    int last = arr.back();
    int n = arr.size();
    for (int j = n - 1; j > 0;--j) {
        arr[j] = arr[j - 1];
    }
    arr[0] = last;
}

void display(const vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    cout << "Array: ";
    display(arr);
   
    int t;
    cout<<"How many times the array should be rotated?\n";
    cin>>t;
    for(int i=0;i<t;i++){
    	 rotate(arr);
    cout << "Rotated Array: ";
    display(arr);
}
    return 0;
}

