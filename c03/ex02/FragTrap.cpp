#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void) {
	cout << "FragTrap | Default constructor called" << endl;
	name = "None";
	hit_point = 100;
	energy = 100;
	attack_dmg = 30;
}

FragTrap::FragTrap(string _name) : ClapTrap(_name) {
	cout << "FragTrap | Default constructor called" << endl;
	name = _name;
	hit_point = 100;
	energy = 100;
	attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	cout << "FragTrap | Copy operator called" << endl;
}

FragTrap FragTrap::operator=(const FragTrap& other) {
	cout << "FragTrap | copy assignment operator called" << endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap(void) {
	cout << "FragTrap | Destructor called" << endl;
}

void FragTrap::highFiveGuys(void) {
	cout << "FragTrap | " << this->name << " says high five!" << endl;
}