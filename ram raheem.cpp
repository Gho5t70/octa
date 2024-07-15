#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int S, P;
    cin >> S >> P;
    
    // Calculate discriminant
    int discriminant = S * S - 4 * P;
    
    // Find roots using quadratic formula
    double root1 = (S + sqrt(discriminant)) / 2.0;
    double root2 = (S - sqrt(discriminant)) / 2.0;
    
    // Ensure the roots are in ascending order
    if (root1 > root2) {
        swap(root1, root2);
    }
    
    // Print the roots in ascending order
    cout << root1 << " " << root2 << endl;
    
    return 0;
}

