#include<iostream>
using namespace std;

class Parent1{
	public:
		void parentone(){
			cout<<"This is the first parent";	
		}
		
};

class Parent2{
	public:
		void parenttwo(){
			cout<<"This is the second parent.";
		} 
	
};

class Child : public Parent1, public Parent2{
	
};


int main(){
	Child obj;
	obj.parentone();
	obj.parenttwo();
	
	return 0;
	

	
}
