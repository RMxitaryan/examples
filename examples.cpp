#include <iostream>

bool simetrik(int num) {
    int arr[10] = {};
    int digitCount = 0;
    while (num) {
        digitCount++;
        arr[num % 10]++;
        num /= 10;
    }
    int a = 0;
    if (arr[0] == digitCount - 1) {
        return false;
    }
    for (int i = 0;i < 10;++i) {
        if (arr[i] % 2 == 1) {
            ++a;
        }
    }
    if (a <= 1) {
        return true;
    }
    return false;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    int count = 0;
    for (int i = a;i <= b;++i) {
        if (simetrik(i)) {
            ++count;
        }
    }
    std::cout << count;
    
  
    return 0;
}