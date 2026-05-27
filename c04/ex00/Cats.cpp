#include "Cats.hpp"

Cat::Cat(void) : Animal("cat") { cout << "Cat Default Constructor called" << endl; }

Cat::Cat(const Cat& ot) : Animal(ot) {
	cout << "Cat Copy Assignment called" << endl;
}

Cat Cat::operator=(const Cat& ot) {
	cout << "Cat Assignation operator called" << endl;
	if (this != &ot) {
		Animal::operator=(ot);
	}
	return *this;
}

Cat::~Cat(void) { cout << "Cat Destructor called" << endl; }

void Cat::makeSound(void) const { cout << "Cat: meow" << endl; }

string Cat::getType(void) const { return this->type; }