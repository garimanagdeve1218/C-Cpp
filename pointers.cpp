
#include<iostream>
using namespace std;

class Book{
	
	string title;
	string author;
	int pages;
	
	Book(string aTitle,string aAuthor,int aPages ){
		title=aTitle;
		author=aAuthor;
		pages=aPages;
		
		
	}
	
};

int main(){
	
	Book book1("abcd","efghi",500);
	Book book2("klmn","opqrs",700);
	
	cout<<book1.title;
	
	
	
	return 0;
}	
