#include <iostream>

class example
{ //all'interno del costruttore devo definire le funzioni che possono essere chiamate all'interno della classe (es. printc)
private:
public:
int c = 0;
	example(); //costruttore
	example(int c); //costruttore con parametro
	void printc();
	~example();
};

example::example(/* args */)
{
	c = 5;
}

example::example(int c) {
	this->c = c;
}


void example::printc() {
	std::cout << c << std::endl;
}

example::~example()
{
}

