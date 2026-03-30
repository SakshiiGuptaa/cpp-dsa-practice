#include<bits/stdc++.h>
using namespace std;

//TC = O(N)
//SC = O(1)
int findMaximumConsecutiveOnes(vector<int>& v){
    int count = 0;
    int maxi = 0;
    for (int i = 0; i < v.size(); i++){
        if(v[i]==1){
            count++;
            maxi = max(maxi,count);
        }
        else{
            count = 0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int maxcount = findMaximumConsecutiveOnes(v);
    cout << maxcount;
    return 0;
}