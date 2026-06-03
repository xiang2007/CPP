#include "HumanA.hpp"

HumanA::HumanA(string _name, Weapon &_weapon): name(_name), weapon(_weapon){}

HumanA::~HumanA()
{
	cout << "Destructor called" << endl;
}

void	HumanA::attack(void)
{
	cout << name << " Attack with " << weapon.getType() << endl;
}