#include <iostream>
#include <cmath>


int main() {
    int n;
    std::cin >> n;
    int* arr = new int[n];
    int* arr2 = new int[n];
    for (int i = 0;i < n;++i) {
        std::cin >> arr[i];
    }
    for (int i = 0;i < n;++i) {
        int nearest;
        i != 0 ? nearest = arr[0] : nearest = arr[1];
        for (int j = 0;j < n;++j) {
            if (i == j) {
                continue;
            }
            if(abs(arr[i] - arr[j]) < abs(arr[i] - nearest)) {
                nearest = arr[j];
            }
            else if (abs(arr[i] - arr[j]) == abs(arr[i] - nearest)) {
                if (arr[j] > nearest) {
                    nearest = arr[j];
                }
            }
        }
        arr2[i] = nearest;
    }
    for (int i = 0;i < n;++i) {
        std::cout << arr2[i] <<'\n';
    }
    delete[] arr;
    delete[] arr2;
}