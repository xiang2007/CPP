#include <iostream>
#include "Fixed.hpp"

using std::cout;
using std::endl;

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