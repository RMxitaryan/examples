#include <iostream>
#include <cmath>
bool erjanik(int x);

int main() {
    int a, b;
    int count = 0;
    std::cin >> a >> b;
    for (int i = a; i <= b; i++) {
        for (int j = 47; j <= i; j++) {
            if (i % j == 0 && erjanik(j)) {
                count++;
                std::cout << i<<'\n';
                break;
            }
        }
    }std::cout << count;

}
bool erjanik(int x) {
    bool existSeven = false;
    bool existFour = false;
    bool existAnother = false;
    while (x > 0) {
        int c = x % 10;
        if (c == 7) {
            existSeven = true;
        }
        else if (c == 4) {
            existFour = true;
        }
        else {
            existAnother = true;
        }
        x /= 10;
    }
    if (existSeven && existFour && !existAnother) {
        return true;
    }
    return false;
}