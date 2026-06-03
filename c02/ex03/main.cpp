#include "Point.hpp"

int main()
{
	Point a(0, 0), b(5, 0), c(0, 5), p(4, 4);

	if (bsp(a, b, c, p)){
		std::cout << "Point is in triangle" << std::endl;
	}
	else
		std::cout << "Point is not in triangle" << std::endl;
	return 0;
}