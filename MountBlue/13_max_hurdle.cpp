#include<bits/stdc++.h>
using namespace std;

int hurdleRace(int k, vector<int> height) {
    int n = height.size();
    int maxHurdle = INT_MIN;
    for(int i=0 ; i<n ; i++){
        maxHurdle = max(maxHurdle, height[i]);
    }
    
    return max(0, maxHurdle-k);
}