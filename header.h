using namespace std;
int add(int x,int y){
	return x+y;
}
int sub(int x,int y){
	return x-y;
}
 int hi(int x,int y){
 	return x/y;
}
int world(int x,int y){000000000
	return x%y;
}
class header{
	public:int a;
	void input(){
	cout<<"Give input: ";
	cin>>a;
	}
};
class display: public header{
	public:
		void dis(){
			cout<<a;
		}
};
