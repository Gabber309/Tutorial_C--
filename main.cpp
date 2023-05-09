#include <iostream>
#include <string>
#include <cstdlib>
#include <filesystem>
#include "example/example.cpp"

using namespace std;

int main(int argc, char** argv) {
	// 1 - get the path of the als file
	if (argc < 2) {
		printf("Please provide the path of the als file\n");
		return 1;
	}

	std::filesystem::path path(argv[1]);
	std::string abs_path = std::filesystem::absolute(path).string();
	std::cout << abs_path;

	// char* st = "asdfghf"; // [0] 'a' [1] 's' [2] 'd' [3] 'f' [4] 'g' [5] 'h' [6] 'f' [7] '\0'

	// 2 - decompress the als file
// #ifdef _WIN32
// 	std::system("./myapp");
// #endif

// #ifdef __linux__ or __APPLE__
// 	std::string cmd = std::string("gzip -d ") + abs_path;
// 	std::system(cmd.c_str());
// #endif

	// 3 - starts to parse
	return 0;
}