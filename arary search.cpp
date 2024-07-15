//#include<iostream>
//using namespace std;
// int main(){
// 	//linear search logic
// 	int user_input;
// 	cout<<"Enter the number you want to search for in the array:";
// 	cin>>user_input;
// 	int counter=0;
// 	for(auto x:array)
// 	{
// 		if(x==user_input){
// 			cout<<"Number"<<user_input<<"is found at the loaction :"<<counter;
// 			exit(0);
//		 }
//		 counter++;
//	 }
//	 cout<<"Not found.";
//	 return 0;
// }
// //binary search
// //find the mid index:=mid=(low+high)/2
// //if(a[mid]==key) //return mid
//// if key>a[mid] return low=mid+1
////if key<a[mid return ]low=mid-1
#include <iostream>

const int MAX_SIZE = 100;

void insert(int arr[], int& size, int element) {
    if (size < MAX_SIZE) {
        arr[size++] = element;
    } else {
        std::cout << "Array is full. Cannot insert element." << std::endl;
    }
}

void deleteAt(int arr[], int& size, int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        --size;
    } else {
        std::cout << "Invalid index. Cannot delete element." << std::endl;
    }
}

void update(int arr[], int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    } else {
        std::cout << "Invalid index. Cannot update element." << std::endl;
    }
}

void read(const int arr[], int size) {
    if (size == 0) {
        std::cout << "Array is empty." << std::endl;
    } else {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, index, newValue;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Insert\n";
        std::cout << "2. Delete\n";
        std::cout << "3. Update\n";
        std::cout << "4. Read\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter element to insert: ";
                std::cin >> element;
                insert(arr, size, element);
                break;
            case 2:
                std::cout << "Enter index to delete: ";
                std::cin >> index;
                deleteAt(arr, size, index);
                break;
            case 3:
                std::cout << "Enter index to update: ";
                std::cin >> index;
                std::cout << "Enter new value: ";
                std::cin >> newValue;
                update(arr, size, index, newValue);
                break;
            case 4:
                read(arr, size);
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
