#include <bits/stdc++.h>

using namespace std;

//TC = O(n) SC = O(k)
int divisibleSumPairs(int n, int k, vector<int> ar) {
    vector<int> temp(k,0);
    int count = 0;
    for(int i=0 ; i<n ; i++){
        int r = ar[i]%k;
        
        int complement = (k-r)%k;
        count += temp[complement];
        temp[r]++;
    }
    return count;
}

//TC = O(n^2) SC = O(1)
int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1; j<n ; j++){
            if((ar[i]+ar[j])%k == 0){
                count++;
            }
        }
    }
    return count;
}