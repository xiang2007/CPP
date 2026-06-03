#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x, y;

	public:
		Point(void);
		Point(const Fixed a, const Fixed b);
		Point(const Point &ot);
		Point& operator=(const Point& ot);
		Point operator-(const Point& ot) const;
		~Point(void);

		Fixed getX(void) const;
		Fixed getY(void) const;
		static Fixed dot(Point a, Point b);

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif