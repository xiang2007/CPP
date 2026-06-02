#include "Cats.hpp"

Cat::Cat(void) : Animal("cat"){
	if (DEBUG)
		cout << "Cat Default Constructor called" << endl;
	brain = new Brain();
}

Cat::Cat(const Cat& ot) : Animal(ot), brain(ot.brain) {
	if (DEBUG)
		cout << "Cat Copy Assignment called" << endl;
}

Cat &Cat::operator=(const Cat& ot){
	if (DEBUG)
		cout << "Cat Assignation operator called" << endl;
	if (this != &ot) {
		Animal::operator=(ot);
		brain = ot.brain;
	}
	return *this;
}

Cat::~Cat(void) {
	if (DEBUG)
		cout << "Cat Destructor called" << endl;
	delete brain;
}

void Cat::makeSound(void) const {cout << "Cat: meow" << endl; }

string Cat::getType(void) const { return this->type; }