#include <iostream>
#include <memory>

class A {
public:
	A() { std::cout << "A::A()" << std::endl; }
	virtual ~A() { std::cout << "A::~A()" << std::endl; }

	void f() {
		std::cout << "A::f()" << std::endl;
	}
};

std::unique_ptr<A> fun() {
	return std::unique_ptr<A>(new A());
}

int main() {
	std::unique_ptr<A> pA(new A());

    // 编译错误
	//std::unique_ptr<A> pOne(pA);
	//std::unique_ptr<A> pTwo = pA;

    // 这里是显式的所有权转移，把pA所指的内存转给pA1
    // 而pA不再拥有该内存
	std::unique_ptr<A> pA1 = std::move(pA);

    // 如上
	std::unique_ptr<A> pA2 = fun();

	return 0;
}

/*
A::A()
A::A()
A::~A()
A::~A()
*/