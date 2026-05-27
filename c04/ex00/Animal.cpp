#include "Animal.hpp"

Animal::Animal(void): type("Animal") { cout << "Animal Default Constructor called" << endl; }

Animal::Animal(string type)  : type(type) {cout << "Animal Assignment Constructor called" << endl; }

Animal::Animal(const Animal& ot) : type(ot.type) { cout << "Animal Copy Constructor called" << endl; }

Animal Animal::operator=(const Animal& ot) {
	cout << "Animal Copy Assignment operator called" << endl;
	if (this != &ot) {
		this->type = ot.type;
	}
	return *this;
}

Animal::~Animal(void) { cout << "Animal Destructor called" << endl; }

void Animal::makeSound(void) const { cout << "No sound" << endl; }

string Animal::getType(void) const { return this->type; }