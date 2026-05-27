#ifndef WRONG_CAT_H
#define WRONG_CAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(const WrongCat& ot);
		WrongCat operator=(const WrongCat& ot);
		~WrongCat(void);

		void makeSound(void) const;
		string getType(void) const;
};

#endif
