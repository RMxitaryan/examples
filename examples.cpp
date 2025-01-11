#include <iostream>

void hanoi(int n,char from = 'A',char to = 'C',char aux = 'B') {
    if (n == 1) {
        std::cout << n <<' '<< from << " -ic " << to << '\n';
        return;
    }
    hanoi(n - 1, from, aux, to);
    std::cout << n <<' '<< from << " -ic "  << to << '\n';
    hanoi(n - 1, aux,to, from);
}

int main() {
    int n;
    std::cin >> n;
    hanoi(n);
 

    return 0;
}
