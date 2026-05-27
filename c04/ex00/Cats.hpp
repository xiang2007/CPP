#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(const Cat& ot);
		Cat operator=(const Cat& ot);
		~Cat(void);

		virtual void makeSound(void) const;
		string getType(void) const;
};

#endif