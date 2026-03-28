#include<bits/stdc++.h>
using namespace std;

//brute
//TC = O(N)+O(X)+O(N-X) = O(2N)
//SC = O(X) = O(N){In worst case}
// void moveZeroes(vector<int>& v){
//     int n = v.size();
//     vector<int> temp;
//     for (int i = 0; i < n; i++){
//         if(v[i]!=0){
//             temp.push_back(v[i]);
//         }
//     }

//     for (int i = 0; i < temp.size(); i++)
//     {
//         v[i] = temp[i];
//     }
//     for (int i = temp.size(); i < n; i++){
//         v[i] = 0;
//     }
// }

//Optimal 
//TC = O(X)+O(N-X) = O(N)
//SC = O(1)
void moveZeroes(vector<int>& v){
    int n = v.size();
    int j = -1;
    for (int i = 0; i < n; i++){
        if(v[i]==0){
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++){
        if(v[i]!=0){
            swap(v[j], v[i]);
            j++;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    moveZeroes(v);
    for(auto it:v){
        cout << it << " ";
    }
    return 0;
}