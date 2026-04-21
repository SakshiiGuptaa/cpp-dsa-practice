/*
c = [1,2,3,4];
k=3

cost = 4+3+2+1*2 = 11

*/
#include <bits/stdc++.h>
using namespace std;

int getMinimumCost(int k, vector<int> c) {
    int cost = 0;
    int n = c.size();
    sort(c.begin(), c.end(), greater<int>());
    for(int i=0 ; i<n ; i++){
        cost += (i/k + 1) * c[i];
    }
    return cost;
}