#include<iostream>
using namespace std;

//The Fibonacci sequence is a series where the next term is the sum of the previous two terms. The first two terms of the Fibonacci sequence is 0 followed by 1.
//Fibonacci Series up to n number of terms.


//int main(){
//	
//	int num,term1=0,term2=1,next_term;
//	
//	cout<<"Enter the number of terms you want to print in the fibonacci series: ";
//	cin>>num;
//	
//	cout<<"Fibonacci series: "<<endl;
//	
//	for(int i=0; i<num ;i++){
//		cout<<term1<<endl;
//		next_term=term1+term2;
//		term1=term2;
//		term2=next_term;
//	}
//	
//	
//	
//	return 0;
//}


//Generate Fibonacci Sequence Up to a Certain Number
int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}	
