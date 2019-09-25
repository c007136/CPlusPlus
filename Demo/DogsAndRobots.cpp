#include <iostream>

using namespace std;

class Dog {
public:
	void speak() { cout << "Dog Speak" << endl; }
	void sit() { cout << "Dog Sit" << endl; }
	void reproduce() {}
};

class Robot {
public:
	void speak() { cout << "Robot Speak" << endl; }
	void sit() { cout << "Robot Sit" << endl; }
	void oilChange() {}
};

template<class T> void perform(T anything) {
	anything.speak();
	anything.sit();
}

int main() {
	Dog d;
	Robot r;
	perform(d);
	perform(r);
}