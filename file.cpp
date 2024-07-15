#include "iostream"
#include "fstream"
#include "string"
#include "sstream"
using namespace std;
//wap to print hello in file
//class display {
//	private:
//		string name;
//		public:
//			display(string n){
//				name =n;
//			}
//			void write(){
//				ofstream obj("C:/Users/mkoul/Documents/HELLO.txt",ios::app);
//				if(obj.is_open()){
//					obj<<name<<" "<<endl;
//					obj.close();
//					cout<<"Record has been stored"<<endl;
//				}
//				else
//				cout<<"Unable to open file\n"; 
//			}
//};
//int main(){
//	display st1("Hello");
//	st1.write();
//	return 0;
//}




//class student{
//	private:
//		string name;
//		int roll;
//		public:
//			student(string n,int r){
//				name=n;
//				roll=r;
//			}
//			void write(){
//				ofstream obj("C:/Users/mkoul/Documents/HELLO.txt",ios::app);
//				if(obj.is_open()){
//					obj<<name<<" "<<roll<<endl;
//					obj.close();
//					cout<<"Student record has  been stored"<<endl;
//				}
//					else
//					cout<<"Unable to open file";
//				}
//			
//			void searchrecords(int r){
//				ifstream file("C:/Users/mkoul/Documents/HELLO.txt");
//				if(file.is_open()){
//					string line;
//					bool found =false;
//					while(getline(file,line)){
//						string name;
//					    int roll;
//					    stringstream ss(line);
//					    ss>>name>>roll;
//					    if(roll== r){
//					    	cout<<"Student found:"<<name<<"(Roll number:"<<roll<<").\n";
//					    	found=true;
//					    	break;
//						}
//					}
//					if(!found){
//						cout<<"Student with Roll Number"<<r<<"not found"<<endl;
//					}
//					file.close();
//				}
//				else
//				cout<<"Unable to open file"<<endl;
//			}
//};
//int main(){
//	student st1("jim",101);
//	st1.write();
//	st1.searchrecords(101);
//	return 0;
//}



//class course{
//	private:
//		string Coursename;
//		int Coursecode;
//		public:
//			course(string n,int r){
//				Coursename=n;
//				Coursecode=r;
//			}
//			void write(){
//				ofstream obj("C:/Users/mkoul/Documents/HELL.txt",ios::app);
//				if(obj.is_open()){
//					obj<<Coursename<<" "<<Coursecode<<endl;
//					obj.close();
//					cout<<"Student record has been stored"<<endl;
//				}
//					else
//					cout<<"Unable to open file";
//				}
//			
//			void searchrecords(int r){
//				ifstream file("C:/Users/mkoul/Documents/HELL.txt");
//				if(file.is_open()){
//					string line;
//					bool found =false;
//					while(getline(file,line)){
//						string Coursename;
//					    int Coursecode;
//					    stringstream ss(line);
//					    ss>>Coursename>>Coursecode;
//					    if(Coursecode== r){
//					    	cout<<"Student found:"<<Coursename<<"(Roll number:"<<Coursecode<<").\n";
//					    	found=true;
//					    	break;
//						}
//					}
//					if(!found){
//						cout<<"Student with Roll Number "<<r<<" not found"<<endl;
//					}
//					file.close();
//				}
//				else
//				cout<<"Unable to open file"<<endl;
//			}
//};
//int main(){
//	course st1("Introduction to c++",101);
//	st1.write();
//	st1.searchrecords(101);
//	return 0;
//}



class course {
private:
    string Coursename;
    int Coursecode;

public:
    course(string n, int r) : Coursename(n), Coursecode(r) {}

    void write() {
        ofstream obj("C:/Users/mkoul/Documents/HEL.txt", ios::app);
        if (obj.is_open()) {
            obj << Coursename << " " << Coursecode << endl;
            cout << "Course record has been stored." << endl;
            obj.close();
        } else {
            cout << "Unable to open file." << endl;
        }
    }

    void searchrecords(int r) {
        ifstream file("C:/Users/mkoul/Documents/HEL.txt");
        if (file.is_open()) {
            string line;
            bool found = false;
            while (getline(file, line)) {
                string coursename;
                int coursecode;
                stringstream ss(line);
                ss >> coursename >> coursecode;
                if (coursecode == r) {
                    cout << "Course found: " << coursename << " (Code: " << coursecode << ")." << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Course with Code " << r << " not found." << endl;
            }
            file.close();
        } else {
            cout << "Unable to open file." << endl;
        }
    }
};

int main() {
    course st1("Introduction_to_C++", 101);
    st1.write();
    st1.searchrecords(101);
    return 0;
}

