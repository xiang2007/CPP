#include "Brain.hpp"

Brain::Brain(void) {
	if (DEBUG)
		std::cout << "Brain default cosntrucor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = new std::string("wow");
	}
}

Brain::Brain(const Brain& ot) {
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		if (ot.ideas[i])
			ideas[i] = new std::string(*ot.ideas[i]);
		else
			ideas[i] = NULL;
	}
}

Brain &Brain::operator=(const Brain& ot) {
	if (DEBUG)
		std::cout << "Copy Assignment operator called" << std::endl;
	if (this != &ot) {
		for (int i = 0; i < 100; i++) {
			if (this->ideas[i])
				delete this->ideas[i];
			if (ot.ideas[i])
				this->ideas[i] = new std::string(*ot.ideas[i]);
			else
				this->ideas[i] = NULL;
		}
	}
	return *this;
}

Brain::~Brain(void) {
	for (int i = 0; i < 100; i++) {
		if (ideas[i])
			delete ideas[i];
	}
}
