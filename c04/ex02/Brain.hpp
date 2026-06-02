#ifndef BRIAN_HPP
# define BRAIN_HPP

#ifndef DEBUG
# define DEBUG 1
#endif

#include <iostream>

class Brain {
	private:
		std::string *ideas[100];

	public:
		Brain(void);
		Brain(const Brain& ot);
		Brain &operator=(const Brain& ot);
		~Brain(void);
};

#endif