#include<iostream>
using namespace std;using namespace std;

int main() { 
 int a,b,n;
  cin>>a; cin>>b;
   for(a;a<=b;a++){ 
   n=a;
    string out;
	 switch (n) { 
	 case 1: out="one";
	  break;
	   case 2: out="two";
	    break;
		 case 3: out="three";
		  break; 
		  case 4: out="four";
		   break;
		    case 5: out="five";
			 break; 
			 case 6: out="six";
			  break; 
			  case 7: out="seven";
			   break; 
			   case 8: out="eight"; 
			   break; 
			   case 9: out="nine";
			    break;
				 default: out=(a % 2 == 0) ? "even" : "odd";
				  }
				   cout << out << "\n";
				    }
					 return 0;
					  }
