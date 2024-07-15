#include<iostream>
using namespace std;
int main(){
	int ch;
	int ca;
	cout<<"No. of classes held:";
	cin>>ch;
	cout<<"\nNo. of classes attended:";
	cin>>ca;
	float per=(static_cast<float>(ca)/ch)*100;
	cout<<"\nPercentage of attendance:"<<per<<"%"<<endl;
	if(per>=75)
	cout<<"Student is allowed to sit in the class."<<endl;
	else
	cout<<"Student is not allowed to sit in the class."<<endl;
	return 0;
}
