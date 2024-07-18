#include<iostream>
#include<list>
int main(){
	list<int> l;
	l.push_front(2);
	l.push_front(2);
	l.push_front(34);
	l.push_front(34);
	for(auto i:l){
		cout<<i<<"\n";
	}
}
