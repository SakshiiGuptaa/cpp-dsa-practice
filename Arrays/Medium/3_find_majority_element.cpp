#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach
//TC = O(N^2) and SC = O(1)
// int majority_element(vector<int>& arr){
//     int n = arr.size();
//     for (int i = 0; i < n; i++){
//         int count = 0;
//         for (int j = 0; j < n; j++){
//             if (arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count >n/2){
//             return arr[i];
//         }
//     }
//     return -1;
// }

//Better Approach
//Using Hash Map to store the count of each element in the array
//TC = O(NlogN)+O(N) and SC = O(N)
// int majority_element(vector<int>& arr){
//     int n = arr.size();
//     map<int, int> mpp;
//     for(int i = 0; i < n; i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it : mpp){
//         if(it.second > n/2){
//             return it.first;
//         }
//     }
//     return -1;
// }

//Optimal Approach
//Using Boyer-Moore Voting Algorithm
// TC = O(N) and SC = O(1)
int majority_element(vector<int>& arr) {
    int el;
    int cnt =0;
    int n = arr.size();
    for(int i=0 ; i<n ; i++){
        if(cnt == 0){
            cnt =1;
            el = arr[i];
        }
        else if(el == arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i] == el){
            cnt1++;
        }
    }
    if(cnt1 > n/2){
        return el;
    }
    return -1;
}
int main(){
    // Your code goes here
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int element = majority_element(arr);
    cout << element << endl;
    return 0;
}