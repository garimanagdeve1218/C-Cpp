//#include <iostream>
//using namespace std;

/* Multilevel Inheritance
A class can also be derived from one class, which is already derived from another class.
In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass). */

// Parent class
//class MyClass {
//  public: 
//    void myFunction() {
//      cout << "Some content in parent class." ;
//    }
//};
//
//// Child class
//class MyChild: public MyClass {
//};
//
//// Grandchild class 
//class MyGrandChild: public MyChild {
//};
//
//int main() {
//  MyGrandChild myObj;
//  myObj.myFunction();
//  return 0;
//}


//Multiple inheritance

#include <iostream>
using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class.\n" ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}
