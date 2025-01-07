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
    int key;
    std::cin >> key;
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right)/ 2;

        if (arr[mid] == key) {
            std::cout << mid;
            break;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
   
    return 0;
}
