#include<bits/stdc++.h>
using namespace std;            

//brute force approach
//TC = O(N^3) and SC = O(1)
// int subarraySum(vector<int>& nums, int k) {
//     int count = 0;
//     int n = nums.size();
//     for(int i=0 ;i<n ; i++){
//         for(int j=i ; j<n ; j++){
//                 int sum = 0;
//                 for (int k = i; k <= j; k++){
//                     sum += nums[k];
//                 }

//                 if (sum == k)
//                 {
//                     count++;
//                 }
//         }
//     }
//     return count;
// }

//Better Approach
//TC = O(N^2) and SC = O(1)
// int subarraySum(vector<int>& nums, int k) {
//     int count = 0;
//     int n = nums.size();
//     for(int i=0 ;i<n ; i++){
//         int sum = 0;
//         for(int j=i ; j<n ; j++){
//             sum += nums[j];

//             if(sum == k){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

//Optimal Approach
//TC = O(N) and SC = O(N)
// Using prefix sum 
int subarraySum(vector<int>& nums, int k) {

}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int countSum = subarraySum(arr, k);
    cout << countSum << endl;
    return 0;
}