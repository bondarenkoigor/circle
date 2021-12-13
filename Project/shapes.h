#pragma once
#include<iostream>
class c_square
{
private:
	int size;
public:
	c_square();
	c_square(int size);
	c_square(c_square& square);
	void info() const
	{
		std::cout << "Size: " << size << "x" << size << "\n";
	}
	int getsize() const
	{
		return size;
	}
};
class c_rectangle
{
private:
	int height;
	int width;
public:
	c_rectangle();
	c_rectangle(int size);
	c_rectangle(int height, int width);
	c_rectangle(c_rectangle& rectangle);
	void info() const
	{
		std::cout << "Size:" << height << "x" << width << "\n";
	}
	int getheight() const
	{
		return height;
	}
	int getwidth() const
	{
		return width
	}
};
class c_circle
{
private:
	int diameter;
public:
	c_circle();
	c_circle(int diameter);
	c_circle(c_circle& circle);
	void info() const
	{
		std::cout << "diameter: " << diameter << "\n";
	}
	int getdiameter()
	{
		return diameter;
	}
};

class c_SquareInCircle
{
private:
	c_square square;
	c_circle circle;
public:
	c_SquareInCircle();
	c_SquareInCircle(c_square square, c_circle circle);
	void info() const
	{
		std::cout << "square < circle\n";
		square.info();
		circle.info();
	}
};
class c_CircleInSquare
{
private:
	c_square square;
	c_circle circle;
public:
	c_CircleInSquare();
	c_CircleInSquare(c_square square, c_circle circle);
	void info() const
	{
		std::cout << "circle < square\n";
		square.info();
		circle.info();
	}
};
class c_line
{
private:
	int lenght;
public:
	c_line();
	c_line(int lenght);
	void info() const
	{
		std::cout << "lenght:" << lenght;
	}
	int getlenght() const
	{
		return lenght;
	}
};