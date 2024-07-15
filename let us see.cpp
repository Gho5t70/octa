#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

class course {
private:
    string Coursename;
    int Coursecode;

public:
    course(string n, int r) : Coursename(n), Coursecode(r) {}

    void write() {
        ofstream obj("C:/Users/mkoul/Documents/course_records.txt", ios::app);
        if (obj.is_open()) {
            obj << Coursename << " " << Coursecode << endl;
            cout << "Course record has been stored." << endl;
            obj.close();
        } else {
            cout << "Unable to open file." << endl;
        }
    }

    void searchrecords(int r) {
        ifstream file("C:/Users/mkoul/Documents/course_records.txt");
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
    course st1("Introduction to C++", 101);
    st1.write();
    st1.searchrecords(101);
    return 0;
}
