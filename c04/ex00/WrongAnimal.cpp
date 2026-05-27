#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	cout << "WrongAnimal Default Constructor called" << endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& ot) {
	cout << "WrongAnimal Copy Constructor called" << endl;
	*this = ot;
}

WrongAnimal WrongAnimal::operator=(const WrongAnimal& ot) {
	cout << "WrongAnimal Copy Assignment operator called" << endl;
	if (this != &ot) {
		this->type = ot.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	cout << "WrongAnimal Destructor called" << endl;
}

void WrongAnimal::makeSound(void) const {
	cout << "No sound" << endl;
}

string WrongAnimal::getType(void) const{
	return this->type;
}
