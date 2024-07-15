#include<iostream>
#include<string>
int main(){
	std::string str1=" Eelu beelu";
//	std::cout<<str;
std::string str="Welcome to MIET";
//replace()
str.replace(3,4,"abcd");
//length()
std::cout<<str.length()<<std::endl;
//at()
std::cout<<str.at(3)<<std::endl;
std::cout<<str<<std::endl;
//append()
str.append(str1);
std::cout<<str<<std::endl;
//erase()
str.erase();
std::cout<<str;
return 0;
}
