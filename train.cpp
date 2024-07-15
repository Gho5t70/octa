#include<iostream>
using namespace std;
//int main(){
//	cout<<"Hello World"<<var<<endl;
//	int value=7/0;
//	cout<<"Value:"<<value<<endl;
//	return 0;
//	}
int from_pound_to_rupee(){
	int a;
	cout<<"How many pounds?\n";
	cin>>a;
	cout<<a*106.9<<"rupees";
}
int to_pound(){
	int b;
	cout<<"How many rupees?\n";
	cin>>b;
	cout<<b/106.9<<"pounds";
}
int to_dollar(){
	int c;
	cout<<"How many rupees?\n";
	cin>>c;
	cout<<c/83.52<<"dollar";
}
int from_dollar_to_rupee(){
	int d;
	cout<<"How many dollars?\n";
	cin>>d;
	cout<<d*83.52<<"rupees";
}
int to_yuan(){
	int e;
	cout<<"How many rupees?\n";
	cin>>e;
	cout<<e/11.48<<"yuan";
}
int from_yuan_to_rupee(){
		int f;
	cout<<"How many yuan?\n";
	cin>>f;
	cout<<f*11.48<<"rupees";
}
int main(){
//int a=15,b=017,c=0x0F,d=0b00001111;
//cout<<"a:"<<a<<"\nb:"<<b<<"\nc:"<<c<<"\nd:"<<d;
//return 0;
/*
//variable may contain any garbage value
int elephant_count;
int lion_count{};//initializes to 0
int dog_count {10};//initializes to 10
int cat_count {15};//initializes to 15
int domesticated_animals {dog_count +cat_count};
//int new_number{doesnt_exist}
//int narrowing_conversion {2.9};//compiler error
cout<<"Elephant count : "<<elephant_count<<"\nLion count:"<<lion_count<<"\nDog count:"<<dog_count<<"\nCat count:"<<cat_count<<"\nDomesticated animals:"<<domesticated_animals;
return 0;
*/
/*
int bike_count=2,truck_count=7,vehicle_count=bike_count+truck_count,narrowing_conversion_assignment=2.9;
cout<<"Bike count:"<<bike_count<<"\nTruck-kun="<<truck_count<<"\nVehicle count:"<<vehicle_count<<"\nNarrowing conversion:"<<narrowing_conversion_assignment;
cout<<"sizeof int :"<<sizeof(int);
cout<<"\nsizeof truck-kun:"<<sizeof(truck_count)<<endl;
return 0;
*/
/*
int apple_count(5);
int orange_count(10);
int fruit_count (apple_count + orange_count);
//int bad_inititialization (doesnt_exist3+doesnt_exist4);
//info lost,less safe than braced initialization
int narrowing_conversion_functional(2.9);
cout<<"Apple_count:"<<apple_count<<"\nOrange count:"<<orange_count<<"\nFruit count:"<<fruit_count<<"\nNarrowing conversion:"<<narrowing_conversion_functional<<endl;//will loose info
return 0;
*/
cout<<"1.rs to pounds\n2.pounds to rs\n3.rs to $\n4.$ ton rs\n5.rs to yuan\n6.yuan to rs";
cin>>c;
if(c==1)
to_pound();
else if(c==2)
from_pound_to_rupee();
else if(c==3)
to_dollar();
else if(c==4)
from_dollar_to_rupee();
else if(c==5)
to_yuan();
else if(c==6)
from_yuan_to_rupee();
else
cout<<"Choose correctly my Nigga";		
return 0;






//int num1,num2;
//cin>>num1>>num2;
//cout<<"Sum:"<<num1+num2;
//return 0;
}
