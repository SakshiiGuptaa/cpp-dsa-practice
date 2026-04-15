#include<bits/stdc++.h>
using namespace std;
//Maximum Subarray Sum using Kadane's Algorithm
//Brute Force Approach
//TC = O(N^3) and SC = O(1)

// int find_max_subarray_sum(vector<int>& arr){
//     int n = arr.size();
//     int max_sum = INT_MIN;
//     for(int i = 0; i < n; i++){
//         for(int j = i; j < n; j++){
//             int sum = 0;
//             for(int k = i; k <= j; k++){
//                 sum += arr[k];
//             }
//             max_sum = max(max_sum, sum);
//         }
//     }
//     return max_sum;
// }

//Better Approach
//TC = O(N^2) and SC = O(1)

int find_max_subarray_sum(vector<int>& arr){
    int n = arr.size();
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int main(){
    // Your code goes here
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max_sum = find_max_subarray_sum(arr);
    cout << max_sum << endl;
    return 0;
}