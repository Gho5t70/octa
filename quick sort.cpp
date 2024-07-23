#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> arr={10,3,4,5,4,45};
sort(arr.begin(),arr.end(),greater<int>());
cout<<"Sorted array: ";
for(int i:arr){
	cout<<i<<" ";
}
return 0;
}
