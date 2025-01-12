#include <iostream>

void istriang(int p);

int main() {
    int p;
    std::cin >> p;
    istriang(p);


}

void istriang(int p) {
    int count = 0;
    for (int a = 1; a <= p / 3; a++) {
        for (int b = 1; b <= (p - a)/2; b++) {
            int c = p - a - b;
            int a1 = a;
            int b1 = b;

            if (a * a + b * b == c * c) {
                count++;

                std::cout << a << " " << b << " " << c << std::endl;
                break;

            }
        }
        if (count) {
            break;
        }
    }
    if (count == 0) {
        std::cout << 0 << 0 << 0;
    }

}