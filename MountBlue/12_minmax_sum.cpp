#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr) {
    int n = arr.size();
    int minEl = INT_MAX;
    int maxEl = INT_MIN;
    long sum =0;
    for(int i=0; i<n ; i++){
        minEl = min(minEl, arr[i]);
        maxEl = max(maxEl, arr[i]);
        sum+=arr[i];
    }
    long maxSum = sum - minEl;
    long minSum = sum - maxEl;
    cout << minSum << " " << maxSum;
}