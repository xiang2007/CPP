#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	if(DEBUG)
		cout << "Dog Default Constructor called" << endl;
	brain = new Brain;
}

Dog::Dog(const Dog& ot) : Animal(ot), brain(ot.brain) { if(DEBUG) cout << "Dog Copy operator called" << endl; }

Dog Dog::operator=(const Dog& ot) {
	if (DEBUG)
		cout << "Dog Copy Assignment Operator called" << endl;
	if (this != &ot) {
		Animal::operator=(ot);
		brain = ot.brain;
	}
	return *this;
}

Dog::~Dog(void) {
	if (DEBUG)
		cout << "Dog Destructor called" << endl;
	delete brain;
}

void Dog::makeSound(void) const {cout << "Dog: woof" << endl; }

string Dog::getType(void) const { return this->type; }