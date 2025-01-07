#include <iostream>

int main() {
    int n;
   std:: cin >> n;
    int* isPrime = new int[n + 1];
    for (int i = 0; i <= n;++i) {
        isPrime[i] = 1;
    }
    isPrime[0] = isPrime[1] = 0;

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            std::cout << i << " ";
        }
    }
    delete[] isPrime;
    return 0;
}
