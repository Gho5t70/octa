#include<iostream>
using namespace std;
void bubblesort(int array[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i;j<n-i-1;j++){
			if(array[j]>array[j+1])
			swap(array[j],array[j+1]);
		}
	}
}
int searching(int array[],int n,int target){
	int i;
	for(i=0;i<n;i++){
		if(array[i]==target)
		return i;
	}
}
void display(int array[],int n){
	for(int i=0;i<n;i++)
	cout<<array[i]<<endl;
}
int main(){
	int array[]={44,5,67,12,89,45};
	int Size=sizeof(array)/sizeof(array[0]);
	cout<<"Unsorted array:\n";
	display(array,Size);
	cout<<"Sorted array:\n";
	bubblesort(array,Size);
	display(array,Size);
	cout<<"\n";
	int result=	searching(array,Size,89);
	cout<<"Target value found at "<<result<<endl;
	return 0;
}
