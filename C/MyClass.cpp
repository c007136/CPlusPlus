#include <iostream>
#include "MyClass.hpp"

A::A() {
	x = 10;
	y = 11;
	z = 12;
}

void A::f() {
	std::cout << "A::f() \n";
	g();
}

void A::g() {
	std::cout << "A::g() \n";
	std::cout << x;
	std::cout << " ";
	std::cout << y;
	std::cout << " ";
	std::cout << z;
	std::cout << "\n";
}