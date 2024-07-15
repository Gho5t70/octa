// #include<iostream>
// using namespace std;
// int main(){
//   int a[5]={1,3,5,7,9};
//   cout<<"Completely initialized int array A:"<<endl;
//   for(int x:a)//for each loop very easy and important for array data structure
//   //read as for x in array a.
//   //for each loop iterates through elements of the array .introduced in c++ 11.
//   cout<<x<<endl;
//   cout<<endl;
//   int b[6]={1,3,5};//keeping the array incomplete to see what is the outcome result
//   cout<<"Partial initialized array B:"<<endl;
//   for(int y:b)//shows that each loop will work according to size of array and not according to number of elements initialized in the array.
//   cout<<y<<endl;
//   cout<<endl;
//   float c[6]={1.2,2.4,3.6,48.54,99.48,54.88};
//   cout<<"Completely initialized float array C:";
//   for(float z:c)
//   cout<<z<<endl;
//   cout<<endl;
//   float d[6]={12.6,82.4,43.6,4.54,77.48,84.88};//no need to know the type of array
//   cout<<"Completely initalized float array D with auto:"<<endl;
//   for(int z:d)
//   cout<<z<<endl;
//   cout<<endl;
//   char e[5]={'A',66,'C',68,'E'};//no need to know the type of array
//   cout<<"Completely initialized char array E with auto:"<<endl;
//   for(auto z:e)
//   cout<<z<<endl;
//   return 0;
// }
#include<iostream>
using namespace std;

// Find the number of pairs of integers in an array whose sum is equal to the given value
int main() {
    int a[5] = {1, 4, 2, 3, 8};
    int value = 9;
    int count = 0;

    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Target sum: " << value << endl;
    cout << "Trios with sum " << value << ": " << endl;

    // Pick the first element of the pair along with a[i]
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
          for(int k=j+1;k<5;k++){
            if (a[i] + a[j] + a[k]== value) {
                count++;
                cout << "(" << a[i] << ", " << a[j] <<", "<<a[k]<< ")" << endl;
            }
        }
    }
    }
    cout << "The count of trios with sum " << value << " is " << count << endl;
    return 0;
}

