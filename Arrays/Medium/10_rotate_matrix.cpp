#include<bits/stdc++.h>
using namespace std;

//Brute force approach
// TC = O(N^2) and SC = O(N^2)
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> rotateMatrix(n, vector<int>(n));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            rotateMatrix[j][n-1-i] = matrix[i][j];
        }
    }
    matrix = rotateMatrix;
    
}


//Optimal approach 
// TC = O(N^2) and SC = O(1) ->in-place
// void rotate(vector<vector<int>>& matrix) {
//     int n = matrix.size();

//     for(int i=0 ; i<=n-2 ; i++){
//         for(int j=i+1 ; j<=n-1 ; j++){
//             swap(matrix[i][j],matrix[j][i]);
//         }
//     }
//     for(int i=0 ; i<n ; i++){
//         reverse(matrix[i].begin(), matrix[i].end());
//     }
// }