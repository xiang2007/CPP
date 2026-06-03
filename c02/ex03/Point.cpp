#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(const Fixed a, const Fixed b) : x(a.toFloat()), y(b.toFloat())
{
}

Point::Point(const Point& ot) : x(ot.x.toFloat()), y(ot.y.toFloat())
{
}

Point& Point::operator=(const Point& ot) {
	(void)ot;
	return *this;
}

Point Point::operator-(const Point& ot) const
{
	Point res(this->x.toFloat() - ot.x.toFloat(), this->y.toFloat() - ot.y.toFloat());
	return res;
}

Point::~Point(void)
{
	if (DEBUG) std::cout << "Destructor called" << std::endl;
}

Fixed Point::getX(void) const
{
	return x;
}

Fixed Point::getY(void) const
{
	return y;
}

Fixed Point::dot(Point a, Point b)
{
	return ((a.getX() * b.getX()) + (a.getY() * b.getY()));
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	Point v0, v1, v2;
	Fixed d00, d01, d02, d11, d12, invDenom, u, v;

	v0 = c - a;
	v1 = b - a;
	v2 = point - a;
	d00 = Point::dot(v0, v0);
	d01 = Point::dot(v0, v1);
	d02 = Point::dot(v0, v2);
	d11 = Point::dot(v1, v1);
	d12 = Point::dot(v1, v2);

	invDenom = 1 / (d00 * d11 - d01 * d01).toFloat();
	u = (d11 * d02 - d01 * d12) * invDenom;
	v = (d00 * d12 - d01 * d02) * invDenom;
	return ((u.toFloat() >= 0) && (v.toFloat() >= 0) && ((u + v).toFloat() < 1));
}