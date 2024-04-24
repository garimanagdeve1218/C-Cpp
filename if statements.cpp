//#include<iostream>
//using namespace std;
//
//int main(){
//	
//	bool isMale=true;
//	bool isTall=true;
//	
//	if(isMale && isTall){       //(and operator)both the conditions have to be true in order to print this statement.
//		
//		cout<<"You are a tall male!";
//		
//	}
//	
//	else{
//		cout<<"You are not a male!";
//	}
//	
//	return 0;
//}

#include<iostream>
using namespace std;

int main(){
	
	bool isMale=true;
	bool isTall=false;
	
	if(isMale || isTall){       //(or operator)any onr of the conditions have to be true in order to print this statement.
		
		cout<<"You are a tall male!";
		
	}
	
	else{
		cout<<"You are not a male!";
	}
	
	return 0;
}
