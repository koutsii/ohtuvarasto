#include <iostream>
#include <string>


int main() {
	std::string s1 = "ab";
	std::string s2 = "c";

	s1 += s2;

	std::cout << s1;
}
