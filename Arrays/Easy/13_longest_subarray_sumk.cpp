#include<bits/stdc++.h>
using namespace std;

//Find the length of the longest subarray whose sum is k

//brute
//TC = APPROX O(N^2)
//SC = O(N)
// int findLongestSubarr(vector<int>& v, int k){
//     int len = 0;
//     int n = v.size();
//     for (int i = 0; i < n; i++){
//         int sum = 0;
//         for (int j = i; j < n ; j++){
//             sum += v[j];
//             if(sum == k){
//                 len = max(len, j - i + 1);
//             }
//         }
//     }
//     return len;
// }

//Better -> optimal if array contains both -ve,+ve and zeros
//TC = O(NlogN) or O(N) using unordered map but can be O(N^2) at some constraints using unordered can better to switch to O(NlogN) at that time
//SC = O(N)
// int findLongestSubarr(vector<int>& v, int k){
//     int n = v.size();
//     //make a map
//     map<int, int> hashMap;
//     int sum = 0;
//     int maxLength = 0;
//     for (int i = 0; i < n; i++){
//         sum += v[i];
//         if(sum == k){
//             maxLength = max(maxLength, i + 1);
//         }
//         int rem = sum - k;
//         if(hashMap.find(rem)!=hashMap.end()){ //mtlb mil jata hai key element
//             int len = i-hashMap[rem];
//             maxLength = max(maxLength, len);
//         }
//         if(hashMap.find(sum) == hashMap.end()){
//             hashMap[sum] = i;
//         }
//     }
//     return maxLength;
// }

//Optimal in case array have only +ve
//TC = O(2N) in worst case , 
//here we have 2 loops but inner loop is running only one time as whole as N not every time of the outer loop runs
//SC = O(1)
int findLongestSubarr(vector<int>& v, int k){
    int n = v.size();
    int left = 0, right = 0;
    int sum = v[0];
    int maxLen = 0;
    while(right < n){
        while(left <= right && sum > k){
            sum -= v[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n){
            sum += v[right];
        }
    }
    return maxLen;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int k;
    cin >> k;
    int length = findLongestSubarr(v, k);
    cout << length;
    return 0;
}

//Homework -> find number of subarrays with sum k