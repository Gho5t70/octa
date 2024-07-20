#include<iostream>
using namespace std;
#include<numeric>
#include<vector>
int main(){
	 vector<int> numbers={1,2,3,4,5};
	 //using accumulate with the lambda to sum up the elements
//	 int sum=accumulate(numbers.begin(),numbers.end(),0,[](int total ,int n){return total +n;});
     //int sum=0;
     /*
     auto addToSum =[&sum](int n){
	 sum+=n;
     };
     for(int n:numbers)
     addToSum(n);
     */
     /*
     auto sum=[=](int total,int n){
    	for(int i=0;i<n;i++)
    	total+=numbers[i];
    	return total;
	 };
	 */
//	 cout<<"Sum: "<<sum(0,5)<<endl;
//   cout<<"Sum: "<<sum<<endl;
	 return 0;
     }
