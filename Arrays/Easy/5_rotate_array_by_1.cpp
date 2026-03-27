#include<bits/stdc++.h>
using namespace std;
//TC = O(N)
vector<int> rotate_one(vector<int>& v){
    int temp = v[0];
    for (int i = 1; i < v.size(); i++){
        v[i - 1] = v[i];
    }
    v[v.size() - 1] = temp;
    return v;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<int> rotated_array = rotate_one(v);
    for(auto it:rotated_array){
        cout << it << " ";
    }
    return 0;
}