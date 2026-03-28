#include<bits/stdc++.h>
using namespace std;

//Brute
//TC = O(N*M)
//SC = O(M) + (O(N+M)=> at worst case for returning the answer )
// vector<int> intersect_array(vector<int>& v1, vector<int>& v2){
//     int n = v1.size();
//     int m = v2.size();
//     vector<int> ans;
//     vector<int> vis(m);
//     // int i = 0, j = 0;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             if(v1[i]==v2[j] && vis[j]==0){
//                 ans.push_back(v1[i]);
//                 vis[j] = 1;
//                 break;
//             }
//             if(v2[j]>v1[i])
//                 break;
//         }
//     }
//     return ans;
// }

//optimal approach  
//At worst case 
//TC = O(N+M) 
//SC = O(N+M) For return the ans array
vector<int> intersect_array(vector<int>& v1, vector<int>& v2){
    int n = v1.size();
    int m = v2.size();
    vector<int> ans;
    int i = 0, j = 0;
    while(i<n && j<m){
        if(v1[i]<v2[j]){
            i++;
        }
        else if(v2[j]<v1[i]){
            j++;
        }
        else{
            ans.push_back(v1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    int n1;
    cin >> n1;
    vector<int> v1(n1);
    for (int i = 0; i < n1; i++){
        cin >> v1[i];
    }
    int n2;
    cin >> n2;
    vector<int> v2(n2);
    for (int i = 0; i < n2; i++){
        cin >> v2[i];
    }
    vector<int> intersectArr = intersect_array(v1, v2);
    for(auto it:intersectArr){
        cout << it << " ";
    }
    return 0;
}