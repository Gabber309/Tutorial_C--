#include <stdio.h> //libreria del c
#include <string> //libreria del c++
#include <cstdlib> //libreria del c++
#include <filesystem> //libreria del c++17
#include <iostream> //libreria del c++
#include "example/example.cpp"

using namespace std;

int main(int argc, char** argv) { 

	// ======== funzioni =========

	//T f
	example ex; //creo un oggetto di tipo example, per inizializzarlo non posso usare le parentesi 
	ex.printc(); //chiamo la funzione printc dell'oggetto e
	//T f(x)
	example ex2(2);
	ex2.printc();
	//T f{x}
	example ex3{ 3 }; //initialized syntax
	ex3.printc();
	//T f{}
	example ex4{};
	ex4.printc();
	//T()
	example(6).printc(); //creo un oggetto di tipo example e chiamo la funzione printc
	// T f = x -> T f = T (x)
	example ex5 = 7;
	ex5.printc();

	// ======== puntatori =========

	example* pex = &ex;	//& = indirizzo di... memoria di ex, ex è un oggetto di tipo example che già esiste
	pex->printc(); //equivalente a (*pex).printc()
	//pointer with new
	example* pex2 = new example(8);
	pex2->printc();
	
	// ======== problemi con i puntatori =========

	// i puntatori di C hanno problemi di sicurezza, quindi in C++ sono stati introdotti i puntatori intelligenti
	// i problemi sui puntatori sono principlamente presenti in C

	int* ptr = new int[10];
	ptr = NULL;	//assegno il puntatore a NULL, che è un indirizzo di memoria non valido
	delete ptr;  // -> se dimentichi di eliminare il puntatore, il programma non lo elimina e si crea un memory leak

	int* ptr2 = new int[10];
	delete [] ptr2; // devi mettere le parentesi quadre per eliminare un array di puntatori sennò elimina solo il primo elemento 
	ptr2[0] = 1; 

	int *p; //-> wild pointer
	*p = 12; // changing value at random memory location

	int *ptr3 = new int[10];
	ptr3[10] = 1; //-> buffer overflow

	// ========= puntatori intelligenti / smart pointer =========
	// sono puntatori che si eliminano da soli quando non vengono più usati
	
	return 0;
}