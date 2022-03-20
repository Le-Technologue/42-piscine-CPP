#include <iostream>
#include "Point.hpp"

int main( void ) {

	Point A = Point(0, 0);
	Point B = Point(5, 5);
	Point C = Point(3, 1); 
	std::cout << "Point A: " << A << std::endl;
	std::cout << "Point B: " << B << std::endl;
	std::cout << "Point C: " << C << std::endl;

	Point point1(5, 5);
	Point point2(2, 1);
	Point point3(2, 3);
	Point point4(-1.23f, 8.74f);
	Point point5(2, 1.5f);

	std::cout << "Point 1 : " << point1 <<
	(bsp(A, B, C, point1) ? " inside" : " outside") << std::endl;

	std::cout << "Point 2 : " << point2 <<
	(bsp(A, B, C, point2) ? " inside" : " outside") << std::endl;

	std::cout << "Point 3 : " << point3 <<
	(bsp(A, B, C, point3) ? " inside" : " outside") << std::endl;

	std::cout << "Point 4 : " << point4 <<
	(bsp(A, B, C, point4) ? " inside" : " outside") << std::endl;

	std::cout << "Point 5 : " << point5 <<
	(bsp(A, B, C, point5) ? " inside" : " outside") << std::endl;

	return (0);
}
