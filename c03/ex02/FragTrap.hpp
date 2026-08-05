#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		void highFiveGuys(void);

		FragTrap(void);
		FragTrap(string _name);
		FragTrap(const FragTrap& other);
		FragTrap operator=(const FragTrap &other);
		~FragTrap(void);
};

#endif