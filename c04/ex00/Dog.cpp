#include "Dog.hpp"

Dog::Dog(void) : Animal() { cout << "Dog Default Constructor called" << endl; }

Dog::Dog(const Dog& ot) : Animal(ot) { cout << "Dog Copy operator called" << endl; }

Dog Dog::operator=(const Dog& ot) {
	cout << "Dog Copy Assignment Operator called" << endl;
	if (this != &ot) {
		Animal::operator=(ot);
	}
	return *this;
}

Dog::~Dog(void) { cout << "Dog Destructor called" << endl; }

void Dog::makeSound(void) const { cout << "Dog: woof" << endl; }

string Dog::getType(void) const { return this->type; }