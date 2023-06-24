#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
    long long res = 1;
    long long base = x % m;

    while (n > 0) {
        if (n % 2 == 1) {
            res = (res * base) % m;
        }

        base = (base * base) % m;
        n /= 2;
    }

    return (res);
}
