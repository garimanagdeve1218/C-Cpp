//constructor inside the class

#include<iostream>
using namespace std;

class MyClass{
	public:
		MyClass(){           // Constructor
			cout<<"I made a constructor!";
		}
};

int main(){
	MyClass obj;             // Create an object of MyClass (this will call the constructor)
	return 0;
}


//constructor who is declared in the class with parameters

//#include <iostream>
//using namespace std;
//
//class Car {        // The class
//  public:          // Access specifier
//    string brand;  // Attribute
//    string model;  // Attribute
//    int year;      // Attribute
//    Car(string x, string y, int z) {     // Constructor with parameters
//      brand = x;                  //initializing the variables the value of constructor arguments.
//      model = y;
//      year = z;
//    }
//};
//
//int main() {
//  // Create Car objects and call the constructor with different values
//  Car carObj1("BMW", "X5", 1999);
//  Car carObj2("Ford", "Mustang", 1969);
//
//  // Print values
//  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//  return 0;
//}


/*Just like functions, constructors can also be defined outside the class. 
First, declare the constructor inside the class, and then define it outside 
of the class by specifying the name of the class, 
followed by the scope resolution :: operator, followed by the name of the 
constructor (which is the same as the class):*/

#include <iostream>
using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}




