#include <iostream>

int main() {

	//6. Find Duplicate Elements: Write a program to identify and count duplicate elements in an array.

	int const N = 10;
	int arr[N];
	for (int i = 0;i < N;i++) {
		std::cin >> arr[i];
	}
	int dublicate[N / 2];
	int ind = 0;
	for (int i = 0;i < N;i++) {
		bool exist = false;
		for (int a = 0;a < N / 2;a++) {
			if (dublicate[a] == arr[i]) {
				exist = true;
				break;
			}
		}
		if (!exist) {
			for (int j = i + 1;j < N;j++) {
				if (arr[j] == arr[i]) {
					dublicate[ind] = arr[j];
					ind++;
					break;
				}
			}
		}

	}
	int count = 0;
	for (int i = 0;i < ind;++i) {
		count++;
	}
	std::cout << count;


	return 0;
}