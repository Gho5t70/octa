 #include<iostream>
 using namespace std;
 
 
 int main (){
 
 int* p_int2 {nullptr};

  int int_data {56};

  p_int2 = &int_data;

  cout << "value : " << *p_int2 // Dereferencing a pointer

             << endl; // 56

  return 0;

}
