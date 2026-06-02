#include "Animal.hpp"

Animal::Animal(void): type("Animal") { if (DEBUG) cout << "Animal Default Constructor called" << endl; }

Animal::Animal(string type)  : type(type) {if (DEBUG) cout << "Animal Assignment Constructor called" << endl; }

Animal::Animal(const Animal& ot) : type(ot.type) {if (DEBUG) cout << "Animal Copy Constructor called" << endl; }

Animal& Animal::operator=(const Animal& ot) {
	if (DEBUG)
		cout << "Animal Copy Assignment operator called" << endl;
	if (this != &ot) {
		this->type = ot.type;
	}
	return *this;
}

void Animal::makeSound(void) const {};
Animal::~Animal() {};


string Animal::getType(void) const { return this->type; }