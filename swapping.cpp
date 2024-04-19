#include<iostream>
using namespace std; 

//Swap Numbers (Using Temporary Variable)

//int main(){
//	
//	int a=5,b=10,temp;
//	cout<<"The values before swapping the numbers is a = "<<a<<" and b = "<<b;
//	
//	
//	temp=a;
//	a=b;
//	b=temp;
//	
//	cout<<"\nThe values after swapping the numbers is a = "<<a<<" and b = "<<b;
//	
//	return 0;
//	
//	
//	
//}


//int main()
//{
//    int a = 5, b = 10, temp;
//
//    cout << "Before swapping." << endl;
//    cout << "a = " << a << ", b = " << b << endl;
//
//    temp = a;
//    a = b;
//    b = temp;
//
//    cout << "\nAfter swapping." << endl;
//    cout << "a = " << a << ", b = " << b << endl;
//
//    return 0;
//}


//Swap Numbers (Without Using Temporary Variable)
int main(){
	
	int a=5,b=10;             //after swap a=10,b=5
	
	cout<<"Before swapping:"<<endl;
	cout<<" a= "<<a<<" b= "<<b;
	
	a =a + b;                //a=10+5=15
	b =a - b;                //b=15-10=5
	a = a - b;               //a=15-5=10             
	
	cout<<"\nAfter swapping:"<<endl;
	cout<<" a= "<<a<<" b= "<<b;
	
	
}
