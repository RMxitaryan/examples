#include <iostream>

int main() {

	char line[100];
	std::cin >> line;
	int i = 0;
	int count = 0;
	while (line[i] != '\0') {
		if (line[i] == '(') {
			count++;
		}
		else if (line[i] == ')') {
			count--;
			if (count < 0) {
				break;
			}
		}
		i++;
	}
	if (!count) {
		std::cout << "all is good";
	}else {
		std::cout << "missing a bracket";
	}
	
	return 0;
}