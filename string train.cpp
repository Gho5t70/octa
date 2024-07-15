#include<iostream>
#include<string>
using namespace std;
int main(){
	/*
	strinmg str1="Hello, ";
	string str2="World!";
	string result =str1+str2;
	cout<<"Concatenated string:"<<result<<endl;
	return 0;
	*/
	string str ="Hello, World!";
	string substr ="World";
	size_t found =str.find(substr);
	if(found!=string::npos)
		cout<<"Substring found at index"<<found<<endl;
		else
		cout<<"Substring not found"<<endl;
		return 0;
	
}



