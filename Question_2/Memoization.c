#include <stdio.h>

int memo[100];

int memoizedF(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    
    if (memo[n] != -1) return memo[n];
    
    memo[n] = memoizedF(n - 3) + memoizedF(n - 2);
    return memo[n];
}

int main() {
    int n = 10;
    for (int i = 0; i < 100; i++) memo[i] = -1;
    printf("F(%d) = %d\n", n, memoizedF(n));
    return 0;
}
