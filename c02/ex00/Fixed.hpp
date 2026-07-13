#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <bits/stdc++.h>

using std::cout;
using std::endl;

class	Fixed{
	private:
		int					value;
		static const int	int_literal = 8;

	public:
		Fixed(void);
		Fixed(const Fixed& ot);
		Fixed &operator=(const Fixed& ot);
		~Fixed(void);

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};
#endif