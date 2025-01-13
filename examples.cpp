#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0;i < n;++i) {
        std::cin >> arr[i];
    }
    int maxCount = 1;
    for (int i = 0;i < n - 1;++i) {
        static int count = 1;
        if (arr[i] == arr[i + 1]) {
            count++;
            if (count > maxCount) {
                maxCount = count;
            }
        }
        else {
                count = 1;
        }
        
    }
    std::cout << maxCount;
}
