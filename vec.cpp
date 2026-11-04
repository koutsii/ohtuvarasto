#include <iostream>
#include <vector>

int main() {
	std::vector<int> vec = {1, 2, 3};

	for (auto num : vec) {
		std::cout << num << " ";
	}
}

