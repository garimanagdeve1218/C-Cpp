#include<iostream>
using namespace std;

//Check Whether Number is Even or Odd using if else

//int main(){
//	
//	int num;
//	cout<<"Enter the number: ";
//	cin>>num;
//	
//	if(num%2==0){
//		cout<<"This is an even number!";
//	}
//	else {
//		cout<<"this is an odd number!";
//	}
//	
//	return 0;
//		
//}



// Check Whether Number is Even or Odd using ternary operators
//The ternary operator is a shorthand notation of if...else statement.
int main(){
	
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	
	(num%2==0) ? cout<<"number is even!" : cout<<"Number is odd!";      
	
	
	return 0;
}
