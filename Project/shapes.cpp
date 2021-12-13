#include "shapes.h"

c_square::c_square()
{
	size = 0;
}

c_square::c_square(int size)
{
	this->size = size;
}

c_square::c_square(c_square& square)
{
	this->size = square.size;
}

c_rectangle::c_rectangle()
{
	height = width = 0;
}

c_rectangle::c_rectangle(int size)
{
	height = width = size;
}

c_rectangle::c_rectangle(int height, int width)
{
	this->height = height;
	this->width = width
}

c_rectangle::c_rectangle(c_rectangle& rectangle)
{
	this->height = rectangle.height;
	this->width = rectangle.width;
}

c_circle::c_circle()
{
	diameter = 0;
}

c_circle::c_circle(int diameter)
{
	this->diameter = diameter;
}

c_circle::c_circle(c_circle& circle)
{
	this->diameter = circle.diameter;
}

c_SquareInCircle::c_SquareInCircle()
{
	square = c_square();
	circle = c_circle();
}

c_SquareInCircle::c_SquareInCircle(c_square square, c_circle circle)
{
	this->square = c_square(square);
	this->circle = c_circle(circle);
}
c_line::c_line()
{
	lenght = 0;
}

c_line::c_line(int lenght)
{
	this->lenght = lenght;
}
