#include "Point.hpp"

int main()
{
	Point a(0, 0), b(10, 0), c(0, 10), p(7, 7);

	if (bsp(a, b, c, p)){
		std::cout << "Point is in triangle" << std::endl;
	}
	else
		std::cout << "Point is not in triangle" << std::endl;
	return 0;
}