//
// Simple programs that prints the current C++ version
//
#include <cstdio>
#include <iostream>
#include <string>


std::string get_version() {
	// C compatible, use std::to_string insted for more modern C++
	char buffer[255];
	sprintf(buffer, "(%ld)", __cplusplus);
	std::string actualVersion(buffer);
	// std::string actualVersion = std::to_string(__cplusplus);

	std::string version;
	switch (__cplusplus) {
		case 202302L:
			version = "C++23 " + __cplusplus;
			break;
		case 202002L:
			version = "C++20 " + actualVersion;
			break;
		case 201703L:
			version = "C++17 " + actualVersion;
			break;
		case 201402L:
			version = "C++14 " + actualVersion;
			break;
		case 201103L:
			version = "C++11 " + actualVersion;
			break;
		case 199711L:
			version = "C++98 " + actualVersion;
			break;
		default:
			version = "pre-standard C++ " + actualVersion;
			break;
	}


	return version;
}

int main() {
	const std::string version = get_version();
	std::cout << "Running C++ version --> " << version << std::endl;
	return EXIT_SUCCESS;
}
