#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		void guardGate(void);
		void attack(const string& target);

		ScavTrap(void);
		ScavTrap(string _name);
		ScavTrap(const ScavTrap& other);
		ScavTrap &operator=(const ScavTrap& other);
		~ScavTrap(void);
};

#endif