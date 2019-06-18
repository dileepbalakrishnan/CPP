#include "Rectangle.hpp"
Rectangle::Rectangle(double width, double height)
	: _width{ width }, _height{ height }
{
}
double Rectangle::Width() const
{
	return _width;
}
double Rectangle::Height() const
{
	return _height;
}
void Rectangle::Scale(double scaleFactor)
{
	_width *= scaleFactor;
	_height *= scaleFactor;
}
double Rectangle::Area() const
{
	return _width * _height;
}
double Rectangle::Perimeter() const
{
	return 2 * (_width + _height);
}