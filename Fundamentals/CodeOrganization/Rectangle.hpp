#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
class Rectangle
{
private:
	double _width{};
	double _height{};
public:
	Rectangle() = default;
	Rectangle(double width, double height);
	double Width() const;
	double Height() const;
	void Scale(double scaleFactor);
	double Area() const;
	double Perimeter() const;
};

inline Rectangle::Rectangle(double width, double height) 
	: _width{ width }, _height{ height }
{
}
inline double Rectangle::Width() const 
{ 
	return _width; 
}
inline double Rectangle::Height() const
{
	return _height;
}
inline void Rectangle::Scale(double scaleFactor)
{
	_width *= scaleFactor;
	_height *= scaleFactor;
}
inline double Rectangle::Area() const
{
	return _width * _height;
}
inline double Rectangle::Perimeter() const
{
	return 2 * (_width + _height);
}
#endif // !RECTANGLE_HPP