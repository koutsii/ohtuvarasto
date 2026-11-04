#include <iostream>


int main() {
	int a = 10;
	int* pA = &a;

	*pA += 1;

	std::cout << a;

	*pA *= 2;

	std::cout << a;
}
