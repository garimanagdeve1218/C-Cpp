#include <iostream>
#include <string>
using namespace std;

/*For example, think of a base class called Animal that has a method called animalSound(). 
Derived classes of Animals could be Pigs, Cats, Dogs, Birds - And they also have their own 
implementation of an animal sound (the pig oinks, and the cat meows, etc.):*/

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

/*Now we can create Pig and Dog objects and override the animalSound() method:*/

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}
