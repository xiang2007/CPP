#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	cout << "ScavTrap | default constructor called" << endl;
	name = "None";
	hit_point = 100;
	energy = 50;
	attack_dmg = 20;
}

ScavTrap::ScavTrap(string _name) : ClapTrap(_name){
	cout << "ScavTrap | " << _name << " created!" << endl;
	name = _name;
	hit_point = 100;
	energy = 50;
	attack_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	cout << "ScavTrap | copy operator called" << endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other) {
	cout << "ScavTrap | Copy assignment called" << endl;
	if (this != &other){
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap(void) {
	cout << "ScavTrap | Destructor called" << endl;
}

void ScavTrap::guardGate(void) {
	cout << "ScavTrap | is now in Gatekeeper mode" << endl;
}

void ScavTrap::attack(const string& target) {
	if (this->energy > 0 && this->hit_point > 0) {
		this->energy--;
		cout << "ScavTrap | " << COLOR_GREEN << this->name << " attacks " << target << " causing " << this->attack_dmg << " points of damage!" << COLOR_DEFAULT << '\n';
	}
	else if (this->energy <= 0 && this->hit_point > 0) {
		cout << "ScavTrap | " << COLOR_YELLOW << this->name << " tried to attack but ran out of energy" << COLOR_DEFAULT << '\n';
	}
	else {
		cout << "ScavTrap | " << COLOR_RED << this->name << " is defeated and can't attack anymore" << COLOR_DEFAULT << '\n';
	}
}
