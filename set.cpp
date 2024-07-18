#include<iostream>
#include<set>//duplicate values//sorted
using namespace std;
int main(){
	set<int> s;
	s.insert(5);
	s.insert(5);
	s.insert(5);
	s.insert(1);
	s.insert(6);
	s.insert(0);
	s.insert(0);
	for(auto i:s){//for each loop
		cout<<i<<"\n";//0,1,5,6
	}cout<<"\n";
	set<int>::iterator it=s.begin();
	it++;
	s.erase(it);
	for(auto i:s){
		cout<<i<<endl;
	}
cout<<endl;
	cout<<"is present "<<s.count(7)<<endl;
	set<int>::iterator itr=s.find(5);
	for(auto it =itr;it!=s.end();it++ ){
		cout<<*it<<" ";//pointers
	}cout<<endl;
	return 0;
}
