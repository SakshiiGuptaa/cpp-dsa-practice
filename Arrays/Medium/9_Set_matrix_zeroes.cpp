#include<bits/stdc++.h>
using namespace std;

//Brute force approach 
// TC = O(N*M)+O(N)+O(M), SC = O(N)+O(M)
// void set_zeroes(vector<vector<int>>& matrix){
//     int m = matrix.size();
//     int n = matrix[0].size();
//     vector<int> zeroRows, zeroCols;

//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             if(matrix[i][j] == 0){
//                 zeroRows.push_back(i);
//                 zeroCols.push_back(j);
//             }
//         }
//     }
//     //for zeroes in rows
//     for(int zero:zeroRows){
//         for (int j = 0; j < n; j++){
//             matrix[zero][j] = 0;
//         }
//     }
//     //for zeroes in columns
//     for (int i = 0; i < m; i++){
//     for(int zero:zeroCols){
//             matrix[i][zero] = 0;
//         }
//     }
// }

//Optimal approach
// TC = O(N*M) and SC = O(1) ->in-place
void set_zeroes(vector<vector<int>>& matrix){
    //Optimal approach
    // row tracking using this array -> matrix[i][0] 
    // column tracking using this array -> matrix[0][j]
    int col0 = 1;
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j!=0){
                    matrix[0][j] = 0;
                }
                else{
                    col0 = 0;
                }
            }
        }
    }

    for (int i = 1; i < n; i++){
        for (int j = 1; j < m; j++){
            if(matrix[i][0] == 0 || matrix[0][j]==0){
                matrix[i][j] = 0;
            }
        }
    }

    if(matrix[0][0]==0){
        for (int j = 0; j < m; j++){
            matrix[0][j] = 0;
        }
    }

    if(col0 == 0){
        for (int i = 0; i < n; i++){
            matrix[i][0] = 0;
        }
    }
}

int main(){
    int m, n;
    //m = no. of rows and n = no. of columns
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    set_zeroes(matrix);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}