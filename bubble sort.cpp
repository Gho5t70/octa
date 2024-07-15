//bubble sort, selection sort
#include<iostream>
using namespace std;
void bubblesort(int array[],int n){
  int i,j;
  for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
      if(array[j]>array[j+1])
      swap(array[j],array[j+1]);
    }
  }
}
void selectionsort(int array[],int n){
  int i, j;
  int min;
  for(i=0;i<=n-1;i++){
      min=i;
    for(j=i+1;j<=n;j++){
    if(array[j]<array[min])
    min=j;
    }
    if (min != i)
            swap(array[min], array[i]);
  }
}
void displayarray(int array[],int size){
  for(int i=0;i<=size;i++)
  cout<<array[i]<<endl;

}
int main(){
  int array[]={1,1,4,5,3,7,6};
  cout<<"Given Array:\n";
  int Size=sizeof(array)/sizeof(array[0]);
  displayarray(array,Size);
  int x;
  cout<<"1.Bubble sort\n2.Selection sort"<<endl;
  cin>>x;
  cout<<"Unsorted Array:\n";
  displayarray(array,Size);
    if(x==1){
  bubblesort(array,Size);
  cout<<"\nSorted Array  :\n";
  displayarray(array,Size);
}
else if(x==2){
  selectionsort(array,Size);
cout<<"\nSorted Array  :\n";
  displayarray(array,Size);
}
  return 0;
}
