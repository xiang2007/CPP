#include "WrongCats.hpp"

WrongCat::WrongCat(void) : WrongAnimal(){
	cout << "WrongCat Default Constructor called" << endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& ot) : WrongAnimal(ot) {
	cout << "WrongCat Copy Assignment called" << endl;
	this->type = ot.type;
}

WrongCat WrongCat::operator=(const WrongCat& ot) {
	cout << "WrongCat Assignment operator called" << endl;
	if (this != &ot) {
		WrongAnimal::operator=(ot);
		this->type = ot.type;
	}
	return *this;
}

WrongCat::~WrongCat(void) {
	cout << "WrongCat Destructor called" << endl;
}

void WrongCat::makeSound(void) const{
	cout << "Wrong Cat: meow" << endl;
}

string WrongCat::getType(void) const{
	return this->type;
}
