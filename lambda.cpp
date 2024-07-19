//lambda function=a
/*
[capture](parameters)->return_type{
//function body
}
*/
//sample program
#include<iostream>
using namespace std;
//int main(){auto add =[](int a,int b){return a+b;};cout<<"Sum: "<<add(3,4)<<endl;return 0;}
//lambda with captures
/*
1.Capture by value:[=]
2.Capture by reference:[&]
3.Cature specific value:[x,&y]
*/
//sample program
/*
int main(){int x=10;int y=20;auto add=[=](int a){return x+y+a;};
cout<<"Sum: "<<add(5)<<endl;
auto addByRef=[&x,&y](int a){x=30;return x+y+a;};
cout<<"Sum by reference: "<<addByRef(5)<<endl;
cout<<"x after modification: "<<x<<endl;
return 0;
}
*/
//lambda in standard algorithms
#include<vector>
#include<algorithm>
/*
int main(){
	vector<int> Number={5,3,8,1,4};
	sort(Number.begin(),Number.end(),[](int a,int b){return a<b;});
	cout<<"Sorted numbers: ";
	for(int num:Number){
		cout<<num<<" ";
	}
	cout<<endl;
	return 0;
}
*/
/*
int main(){
	int x=10;
	auto modifyX=[x]() mutable {x=20;cout<<"Inside lambda,x = "<<x<<endl;};

modifyX();
cout<<"Outside lambda ,x= "<<x<<endl;
return 0;
}
*/
//specified by return value
/*
int main(){auto divide=[](int a,int b)->double{
if(b==0){
	return 0;
}
return static_cast<double>(a)/b;};
cout<<"Division result: "<<divide(10,2)<<endl;
cout<<"Division by zero result: "<<divide(10,0)<<endl;
return 0;
}
*/
//for each with lambda
/*
int main(){
	vector<int> Number={1,2,3,4,5};
	for_each(Number.begin(),Number.end(),[](int n){cout<<n<<"  ";});
	for(int i:Number){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
*/
//find_if with lambda
//predicate is used for custum data types
/*
int main(){
	vector<int> Number={1,3,5,8,10,13};
	auto it= find_if(Number.begin(),Number.end(),[](int n){
		return n%2==0;//predicate to find even numbers
	});
	if(it!=Number.end())
	cout<<"First even Number found: "<<*it<<endl;
	else
	cout<<"No even number is found."<<endl;
return 0;
}
*/
int main(){
	vector<int> number={1,3,5,8,10,13};
	for(int  i:number){
		if(i%2==0){
		
		cout<<"First even Number found: "<<i<<endl;
		exit(0);}
	}
	cout<<"No even number is found."<<endl;
	
	return 0;
}




