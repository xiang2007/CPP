#include <iostream>
#include "Fixed.hpp"

using std::cout;
using std::endl;

// int main( void ) 
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }

int main()
{
	{
		cout << "=== Addition ===" << endl;
		Fixed a(10);
		Fixed b(57.0f);
		Fixed c(30 + 39.f);

		cout << a + b << endl;	// 67
		cout << c << endl;		// 69
		cout << a + b + c << endl;	// 136
	}
	{
		cout << "=== Subtraction ===" << endl;
		Fixed a(10);
		Fixed b(5);
		Fixed c(100 - 33);

		cout << a - b << endl;	// 5
		cout << c << endl;		// 67
		cout << a - b- c << endl;	// -62
	}
	{
		cout << "=== Multiplication ===" << endl;
		Fixed a(10);
		Fixed b(6.7f);
		Fixed c(42 * 10);

		cout << a * b << endl;
		cout << c << endl;
		cout << a * b * c << endl;
	}
}