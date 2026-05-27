#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

class Animal {
	protected:
		string type;

	public:
		Animal(void);
		Animal(string type);
		Animal(const Animal& ot);
		Animal operator=(const Animal& ot);
		virtual ~Animal(void);

		virtual void makeSound(void) const;
		string getType(void) const;
};

#endif
