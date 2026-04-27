#include<bits/stdc++.h>
using namespace std;

int minimumAbsoluteDifference(vector<int> arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    
    int minAbs = INT_MAX;
    for(int i=0 ; i<n-1 ; i++){
        int diff = abs(arr[i]-arr[i+1]);
        minAbs = min(minAbs, diff);
    }
    
    return minAbs;
}