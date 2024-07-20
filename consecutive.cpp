#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	vector<int> binary={1,0,1,1,0,0,1};
	int count =0;

	for(int i=0;i<binary.size();i++){
		if(binary[i]==1 && binary[i] == binary[i+1]){
			count++;
		}
	}
	cout<<count<< " consecutive times 1 occured.";
}

