#include <iostream>

class example
{
private:
protected:
public:
	int c = 0;
	example();
	example(int c);
	~example();
	void printc();
};

example::example()
{
	c = 1;
}

example::example(int c)
{
	this->c = c;
}

void example::printc() {
	std::cout << c << std::endl;
}

example::~example()
{
}

class example2 : private example
{
private:
public:
	example2();
	~example2();
};

example2::example2()
{
	std::cout << c << std::endl;
}

// 1) The members declared after the access specifier have public member access
// 2) The members declared after the access specifier have protected member access
// 3) The members declared after the access specifier have private member access
// 4) Public inheritance: the public and protected members of the base class listed after the access specifier keep their member access in the derived class while the private members of the base class are inaccessible to the derived class
// 5) Protected inheritance: the public and protected members of the base class listed after the access specifier are protected members of the derived class while the private members of the base class are inaccessible to the derived class
// 6) Private inheritance: the public and protected members of the base class listed after the access specifier are private members of the derived class while the private members of the base class are inaccessible to the derived class