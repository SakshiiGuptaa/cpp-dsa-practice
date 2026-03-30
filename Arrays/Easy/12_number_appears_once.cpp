#include<bits/stdc++.h>
using namespace std;

//Brute
//TC = O(N^2)
//SC = O(1) 
// int findNumberAppearsOnce(vector<int>& v){
//     int n = v.size();
//     for (int i = 0; i < n; i++){
//         int count = 0;
//         int num = v[i];
//         for (int j = 0; j < n; j++){
//             if(v[j]==num){
//                 count++;
//             }
//         }
//         if(count ==1){
//             return num;
//         }
//     }
//     return -1;
// }
//Better
// 2 approaches -> 
// 1. using vector for hashing
//TC = O(N)+O(N) = O(2N)
//SC = O(N) for hash array
//If the inputs are negative or very large then we can use map instead of vector for hashing
// int findNumberAppearsOnce(vector<int>& v){
//     int n = v.size();
//     int maxi = 0;
//     for (int i = 0; i < n ;i++){
//         maxi = max(maxi, v[i]);
//     }
//     vector<int> hash(maxi + 1, 0);
//     for (int i = 0; i < n; i++){
//         hash[v[i]]++;
//     }
//     for (int i = 0; i < n; i++){
//         if(hash[v[i]] == 1){
//             return v[i];
//         }
//     }
//     return -1;
// }
// 2. using map

// int findNumberAppearsOnce(vector<int>& v){
//     int n = v.size();
//     map<long long,int> mp;
//     for (int i = 0; i < n; i++){
//         mp[v[i]]++;
//     }
//     for (auto it : mp){
//         if(it.second == 1){
//             return it.first;
//         }
//     }
//     return -1;
// }

//Optimal approach - XOR
//TC = O(N)
//SC = O(1)
int findNumberAppearsOnce(vector<int>& v){
    int n = v.size();
    int ans = 0;
    for (int i = 0; i < v.size(); i++){
        ans = ans ^ v[i];
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int number = findNumberAppearsOnce(v);
    cout << number;
    return 0;
}