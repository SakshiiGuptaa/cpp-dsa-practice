#include<bits/stdc++.h>
using namespace std;

//REVERSE METHOD WITHOUT STL
void reverse(vector<int>& v, int start, int end){
    while(start<=end){
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}

//This have 2 approaches
//brute
//1. Store elements till k distance in a temp array, then,
//2. From k to n shift the elements in starting,
//3. Those stored elements in temp put them into the original vector from k to n
//TC = O(K)+O(N-K)+O(K) = O(N+K)
//SC = O(K)
// void rotateArrayK(vector<int>& v, int k){
//     int n = v.size();
//     vector<int> temp(k);
//     for (int i = 0; i < k; i++){
//         temp[i] = v[i];
//     }
//     for (int i = k; i < n; i++){
//         v[i - k] = v[i];
//     }
//     for (int i = n - k; i < n; i++){
//         v[i] = temp[i - (n - k)];
//     }
// }
//optimal
//TC = O(K)+O(N-K)+O(N) = O(2N)
//SC = O(1)
void rotateArrayK(vector<int>& v, int k){
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin() + k, v.end());
    reverse(v.begin(), v.end());
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
    rotateArrayK(v,k);
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    return 0;
}