#include <stdio.h> //libreria del c
#include <cstdlib> //libreria del c++
#include <filesystem> //libreria del c++17

int main(int argc, char** argv) { //argc = argument count, argv = argument vector, char** = array di stringhe (array di array di char)
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


	//1 - get the path of the als file
	
	if (argc < 2) {
		printf("Please provide the path of the als file\n");
		return 1;
	}

	


	//2 - decompress the file
	#ifdef _WIN32
		std::system(".\\C:\\Program Files\\WinRAR");
	#endif
	#ifdef __linux__or__MacOS__
		std::system("gzip -cd ./assets/spoiledwine_2023_04_08.als > ./assets/decompressed.xml", path); 
	#endif

	//3 - starts to parse the file

	return 0;
}
