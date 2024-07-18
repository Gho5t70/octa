#include<iostream>
#include<map>
using namespace std;
int main(){
	 map<int,string> m;
	 m[1]="Ajay";
	 m[2]="Nanjay";
	 m[4]="Manjay";
	 m.insert({5,"Antika"});
	 for(auto i:m){
	 	//i.first and i.second are expressions not functions
	 	cout<<i.first<<" "<<i.second<<" "<<endl;
	 }
	 cout<<"Find the element"<<m.count(-13)<<endl;
	 m.erase(5);
	 cout<<"After erase"<<endl;
	 for(auto i:m){
	 	cout<<i.first<<" i.second"<<" "<<endl;
	 }
	 auto findElement=m.find(4);
	 for(auto i=findElement;i!=m.end();i++){
	 	cout<<(*i).first<<" "<<(*i).second<<endl;
	 }
}
