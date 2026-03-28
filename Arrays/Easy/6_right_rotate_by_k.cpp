#include<bits/stdc++.h>
using namespace std;

//brute
//TC = O(N-K)+O(K)+O(N-K) = O(2N-K)
//SC = O(N-K)
// void right_rotate(vector<int>& v, int n, int k){
//     k = k % n; //if n=5 and k=8 then, we need to rotate only 3 times not 8 becuase after rotating 5 times it comes to original place to rotate remaining 3 times 
//     vector<int> temp(n); //O(N-K)
//     for (int i = 0; i < n - k; i++){//O(N-K)
//         temp[i] = v[i];
//     }
//     for (int i = n - k; i < n; i++){//O(K)
//         v[i - (n - k)] = v[i];
//     }
//     for (int i = k; i < n; i++){//O(N-K)
//         v[i] = temp[i - k];
//     }
// }

//Optimal

void right_rotate(vector<int>& v, int n, int k){
    k = k % n;
    reverse(v.begin(), v.begin() + n - k);
    reverse(v.begin()+n-k, v.begin() + n );
    reverse(v.begin(), v.begin() + n);
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
    right_rotate(v, n,k);
    for(auto it:v){
        cout << it << " ";
    }
    return 0;
}