#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0;i < n;++i) {
        std::cin >> arr[i];
    }
    for (int i = 1;i < pow(2,n);++i) {
        int* arr2 = new int[n];
        for (int j = n - 1;j >= 0;j--) {
            int c = (i >> j) & 1;
            arr2[n - j - 1] = c;
        }
        for (int i = 0;i < n;i++) {
            if (arr2[i]) {
                std::cout << arr[i] << ' ';
            }
        }
        std::cout << '\n';
        delete[] arr2;
    }
    delete[] arr;
    return 0;
}
