#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

class WrongAnimal {
	protected:
		string type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& ot);
		WrongAnimal operator=(const WrongAnimal& ot);
		~WrongAnimal(void);

		void makeSound(void) const;
		string getType(void) const;
};

#endif
