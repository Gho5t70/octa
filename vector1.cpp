#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Initial size: " << vec.size() <<endl;
    cout << "Maximum size: " << vec.max_size() <<endl;
    cout << "Initial capacity: " << vec.capacity() <<endl;
    vec.reserve(20);
    cout << "Capacity after reserving space for 20 elements: " << vec.capacity() <<endl;
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    cout<<"After push_back():";
      for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout<<endl;
    cout << "Size after adding more elements: " << vec.size() <<endl;
	cout << "Capacity after adding more elements: " << vec.capacity() <<endl;
	cout<<"Before clear() size:"<<vec.size()<<endl;
	vec.clear();
	cout<<"After clear() size:"<<vec.size()<<endl;
	cout<<"After clear() size:"<<vec.capacity()<<endl;
	/*
	//another approach to run the vector
	vector<int> c(5,1)
	//it means size is 5 and all five default value is 1
	cout<<"print all element"<<endl;
	//another method
	for(int i :v){
	cout<<i<<" ";
}
	 */
    return 0;
}

