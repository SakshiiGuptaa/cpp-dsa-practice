#include <bits/stdc++.h>
using namespace std;

int getTotalX(vector<int> a, vector<int> b) {
    // Step 1: Find LCM of all elements in a
    int lcmA = a[0];
    for (int x : a)
        lcmA = lcm(lcmA, x);

    // Step 2: Find GCD of all elements in b
    int gcdB = b[0];
    for (int x : b)
        gcdB = __gcd(gcdB, x);

    // Step 3: Count multiples of lcmA that divide gcdB
    int count = 0;
    for (int x = lcmA; x <= gcdB; x += lcmA) {
        if (gcdB % x == 0)
            count++;
    }

    return count;
}