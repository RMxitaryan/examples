#include <iostream>


int main() {
    int N[20] = { 55,55,56,57,80,81,82,100,101,102,103,105,105,105,105,106,106,106,106,106 };
    int M[30] = { 70,69,68,67,66,65,64,63,62,61,60,59,58,57,54,54,54,53,52,51,50,49,48,47,46,46,46,45,44,43};
    int C[50];
    int i = 0;
    int j = 29;
    int k = 0;
    while (k < 50) {
        if (i == 20 && j == -1) {
            break;
        }
        if (k >= 1) {
          if (C[k - 1] == N[i]) {
            ++i;
            continue;
          }
          if (C[k - 1] == M[j]) {
            --j;
            continue;
          }
        }
        
        if (i == 20) {
            C[k] = M[j];
            --j;
            ++k;
            continue;
        }
        if (j == -1) {
            C[k] = N[i];
            ++i;
            ++k;
            continue;
        }
        if (N[i] <= M[j]) {
            C[k] = N[i];
            ++i;
        }
        else {
            C[k] = M[j];
            --j;
        }
        ++k;
    }
    for (int t = 0;t < k;++t) {
        std::cout << C[t] << '\n';
    }
    
  
    return 0;
}