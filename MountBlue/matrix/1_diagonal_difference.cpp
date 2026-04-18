#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int lrSum = 0;
    int rlSum =0;
    for(int i = 0 ; i<n ; i++){
        int m = arr[i].size();
        for(int j=0 ; j<m ; j++){
            if(i==j){
                lrSum += arr[i][j];
            }
            if(j==n-i-1){
                rlSum+=arr[i][j];
            }
        }
    }
    return abs(lrSum-rlSum);
}