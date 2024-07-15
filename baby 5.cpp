#include <iostream>
#include <array>
#include<bits/stdc++.h>
#include <algorithm> // for std::count
using namespace std;
int main() {
    array<int, 5> a= {3,4,7,2,7};
    int number = 3;
    int frequency = count(a.begin(), a.end(), number);
    cout << "The frequency of " << number << " in the array is: " << frequency << endl;
    cout<<a.sort()<<endl;
    return 0;
}

