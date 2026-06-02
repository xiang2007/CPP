#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

	private:
		Brain *brain;

	public:
		Dog(void);
		Dog(const Dog& ot);
		Dog operator=(const Dog& ot);
		~Dog(void);

		virtual void makeSound(void) const;
		string getType(void) const;
};

#endif