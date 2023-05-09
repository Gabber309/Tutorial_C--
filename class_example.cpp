#include "example/example.cpp"
#include <memory>

using namespace std;

int main(int argc, char** argv) {
	// ============== using C++ inizialization ==============
	// T f
	example ex;
	ex.printc();
	// T f(x)
	example ex2(2);
	ex2.printc();
	// T f{x}
	example ex3{ 3 };
	ex3.printc();
	// T f{}
	example ex4{};
	ex4.printc();
	// T()
	// example(6).printc();
	// T f = x -> T f = T(x)
	example ex5 = 5;
	ex5.printc();

	// ============== using C pointer ==============
	// pointer
	example* pex = &ex;
	ex.c = 6;
	pex->printc();
	// pointer with new
	example* pex2 = new example(7);
	pex2->printc();

	// ============== using C++ smart pointer ==============
	// unique_ptr
	unique_ptr<example> upex(new example(8));
	upex->printc();
	// shared_ptr
	shared_ptr<example> spex(new example(9));
	spex->printc();
	// weak_ptr
	weak_ptr<example> wpex(spex);
	wpex.lock()->printc();

	// ============== pointers problems ==============
	/* 
		Memory Leaks: This occurs when memory is repeatedly allocated 
		by a program but never freed. This leads to excessive memory 
		consumption and eventually leads to a system crash.
	*/
	int* ptr = new int[10];
	ptr = NULL;
	delete[] ptr; // -> memory leak

	/* 
		Dangling Pointers: A dangling pointer is a pointer that occurs 
		at the time when the object is de-allocated from memory without 
		modifying the value of the pointer.
	*/
	int* ptr2 = new int[10];
	delete[] ptr2;
	ptr2[0] = 1;  // -> dangling pointer

	/* 
		Wild Pointers: Wild pointers are pointers that are declared and
		allocated memory but the pointer is never initialized to point 
		to any valid object or address.
	*/
	int *p;  // -> wild pointer
  	// *p = 12;  // -> changing value at random memory location

	/* 
		Data Inconsistency: Data inconsistency occurs when some data 
		is stored in memory but is not updated in a consistent manner.
	*/
    /* 
		Buffer Overflow: When a pointer is used to write data to a memory
		address that is outside of the allocated memory block. 
		This leads to the corruption of data which can be exploited by malicious attackers.
	*/
	int *ptr3 = new int[10];
	ptr3[10] = 1; // -> buffer overflow

	return 0;
}