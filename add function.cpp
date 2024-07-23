#include<iostream>
#include"header.h"
using namespace std;
int add(int x,int y);
int sub(int x,int y);
int hi(int x,int y);
int world(int x,int y);
int main(){
	cout<<"Add function "<<add(10,20)<<endl;
	cout<<"Sub function "<<sub(10,20)<<endl;
	cout<<hi(20,10)<<"\n";
	cout<<world(30,17)<<"\n";
	display d;
	d.input();
	d.dis();
	return 0;
}


