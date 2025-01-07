#include <iostream>
#include <cmath>

int main() {
    const int N = 10;
    int arr[N];
    int n;
    std::cin >> n;

    for (int i = 0;i < n;++i) {
        std:: cin >> arr[i];
    }
    //poqraguyn araj berel (Selection Sort)
    for (int i = 0; i < n - 1;++i) {
        int ind = i;
        for (int j = i + 1; j < n;++j) {
            if (arr[j] < arr[ind]) {
                ind = j;
            }
        }
        int elem = arr[i];
        arr[i] = arr[ind];
        arr[ind] = elem;

    }
    //pxpjaki algoritm (Bubble sort)
    for (int i = 0; i < n - 1;++i) {
        for (int j = 0; j < n - i - 1;++j) {
            if (arr[j] > arr[j + 1]) {
                int elem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = elem;
            }
        }
    }
    for (int i = 0;i < n;++i) {
        std::cout << arr[i] << '\n';
    }
    return 0;
}
