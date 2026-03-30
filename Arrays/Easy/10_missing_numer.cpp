#include<bits/stdc++.h>
using namespace std;

//Brute 
//TC = approx O(N^2)
//SC = O(1)
// int findMissing(vector<int>& v, int N){
//     for (int i = 1; i <= N; i++){
//         int flag = 0;
//         for (int j = 0; j < N-1; j++){
//             if(i == v[j]){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0){
//             return i;
//         }
//     }
//     return -1;
// }

//Better
// int findMissing(vector<int>& v, int N){
//     int maxi = 0;
//     for (int i = 0; i < v.size(); i++){
//         maxi = max(maxi, v[i]);
//     }
//     vector<int> hash(maxi+1);
//     for (int i = 0; i < v.size(); i++){
//         hash[v[i]]++;
//     }
//     for (int i = 1; i <= N; i++){
//         if(hash[i]==0){
//             return i;
//         }
//     }
//     return -1;
// }

//Optimal
//Approach 1 : using sum formula of first N natural numbers
//TC = O(N)
//SC = O(1)
//BUT WHEN THE SIZE OF THE INPUT IS VERY LARGE THEN IT CAN CAUSE INTEGER OVERFLOW
// int findMissing(vector<int>& v, int N){
//     int total = N * (N + 1) / 2; //sum of first N natural numbers
//     int sum = 0;
//     for (int i = 0; i<v.size(); i++){
//         sum += v[i];
//     }
//     return total - sum;
// }

//Approach 2 : using XOR
//TC = O(N)
//SC = O(1)
int findMissing(vector<int>& v, int N){
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i < N-1; i++){
        xor1 = xor1 ^ v[i];
        xor2 = xor2 ^ (i + 1);
    }
    xor2 = xor2 ^ N; //because we are iterating only till N-1 so we need to take xor of N with xor2
    return xor1 ^ xor2;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int N;
    cin >> N;
    int findMissingNum = findMissing(v,N);
    cout << findMissingNum;
    return 0;
}