//ket parking
#include<iostream>
#include<string>
using namespace std;
int main(){
	int ch;

	
	int car=0;
	int bike=0;
	int rikshaw=0;
	char c;
	do{
			cout<<"1.Car Park\n2.Bike Park\n3.Rikshaw Park\n4.Exit\n";
		cin>>ch;
	if (ch == 1) {
            car++;
            cout << "Car parked. Total cars: " << car << endl;
        } else if (ch == 2) {
            bike++;
            cout << "Bike parked. Total bikes: " << bike << endl;
        } else if (ch == 3) {
            rikshaw++;
            cout << "Rikshaw parked. Total rikshaws: " << rikshaw << endl;
        } else if (ch == 4) {
            cout << "Exiting..." << endl;
            break;
        } else {
            cout << "Please choose a valid option." << endl;
        }
        cout<<"Do you want to perform this operation again:";
        cin>>c;
    } while (c =='y'||c=='Y');
	
	 return 0;
}
//project//attribut bata//functionality bata 
