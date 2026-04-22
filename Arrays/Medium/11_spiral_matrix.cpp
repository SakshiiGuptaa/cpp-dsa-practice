#include<bits/stdc++.h>
using namespace std;

vector<int> find_spiral_Order(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    vector<int> resultMatrix;
    while(left<=right && top<=bottom){
        for(int i=left ; i<=right ; i++){
            resultMatrix.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top ; i<=bottom ; i++){
            resultMatrix.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right ; i>=left ; i--){
                resultMatrix.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom ; i>=top ; i--){
                resultMatrix.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return resultMatrix;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    vector<int> spiralOrder = find_spiral_Order(matrix);
    int s = spiralOrder.size();
    for(int i=0 ; i<s; i++){
        cout << spiralOrder[i] << " ";
    }
    return 0;
}