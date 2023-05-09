#include <stdio.h> //libreria del c
#include <string> //libreria del c++
#include <cstdlib> //libreria del c++
#include <filesystem> //libreria del c++17
#include <iostream> //libreria del c++
#include "example/example.cpp"

using namespace std;

int main(int argc, char** argv) { //argc = argument count, argv = argument vector, char** = array di stringhe (array di array di char)


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

	// int a = 4; //0100
	// int b = 6; //0110
	// a & b; //0100


	// for (size_t i = 0; i < argc; i++) {
	// 	printf("%s\n", argv[i]);
	// }

	//int a = 4; //0100
	//int b = 2; //0010
	//int c = (a << b); //010000, traslo a a sinistra di 2 bit (b = 2)
	//printf("%d\n", c); //16, %d = decimal, \n = new line
	
	// printf("%d", argc);

	//char* st = "ciao"; // [0] = 'c', [1] = 'i', [2] = 'a', [3] = 'o', [4] = '\0', l'ultimo carattere è sempre \0 per indicare la fine della stringa
	//mai usare char* perchè non è sicuro per fare le stringhe

	// std::string st = "ciao";
	// st.data(); //ritorna un puntatore al primo carattere della stringa

	// std::string a = "a";
	// std::string b = "b";
	



	//1 - get the path of the als file
	
	// if (argc < 2) {
	// 	printf("Please provide the path of the als file\n");
	// 	return 1;
	// }

	


	//2 - decompress the file
	// #ifdef _WIN32
	// 	std::system(".\\C:\\Program Files\\WinRAR");
	// #endif
	// #ifdef __linux__or__MacOS__
	// 	std::system("gzip -cd ./assets/spoiledwine_2023_04_08.als > ./assets/decompressed.xml", path); 
	// #endif

	//3 - starts to parse the file

	return 0;
}
