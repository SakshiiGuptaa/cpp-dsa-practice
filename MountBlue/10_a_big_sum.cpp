#include <bits/stdc++.h>
using namespace std;

long aVeryBigSum(vector<long> ar) {
    int n = ar.size();
    long sum = 0;
    for(int i=0 ; i<n ; i++){
        sum+=ar[i];
    }
    return sum;
}