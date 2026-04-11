// brute -> optimal(two pointer)

#include<bits/stdc++.h>
using namespace std;

//brute
//TC = O(NlogN)+O(N)
//SC = O(N)
// int remove_duplicate(vector<int>& v){
//     set<int> s;
//     for(auto it:v){ // Set insertion takes O(NlogN) T.C
//         s.insert(it);
//     }
//     int index = 0;
//     for(auto it: s){
//         v[index] = it;
//         index++;
//     }
//     return index;
// }
//optimal
int remove_duplicate(vector<int>& v){
    int index = 0;
    for (int j = 1; j < v.size(); j++){
        if(v[j]!=v[index]){
            v[index + 1] = v[j];
            index++;
        }
    }
    return index + 1;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int find_size = remove_duplicate(v);
    cout << find_size;
    return 0;
}