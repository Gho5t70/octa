#include<iostream>
using namespace std;
void add(int a,int b){
	cout<<a+b;
}
void add(int a,int b,int c){
	cout<<a+b+c;
}
void sub(int a,int b){
	cout<<a-b;
}
void pro(int a,int b){
	cout<<a/b;
}
void rem(int a,int b){
	cout<<a%b;
}
int main(){
	/*
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"a:"<<a<<"\nb:"<<b<<"\nc:"<<c<<endl;
	if (a>b){
		if(a>c)
		cout<<"a";
		else
		cout<<"c";
	}
	else
{
	if(b>c)
	cout<<"b";
	else
	cout<<"c";
}
return 0;
*/
add(10,10,10);
cout<<endl;
add(13,7);
cout<<endl;
sub(13,7);
cout<<endl;
pro(13,7);
cout<<endl;
rem(13,7);
return 0;
//funtion overloading:if we create different function with same names ,this method of making functions is called function overloading 
//polymorphism:A function that can evaluate to or be applied to values of different types
//run time polymorphism:Whenever an object is bound with the functionality at run time, this is known as runtime polymorphism. 
//compile time polymorphim:Compile time polymorphism is achieved by method overloading and operator overloading 
}
