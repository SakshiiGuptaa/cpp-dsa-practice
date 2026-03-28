#include<bits/stdc++.h>
using namespace std;

//Brute
//using set 
//TC = O(N1logN)+O(N2logN)+O(N1+N2)
//SC = O(N1+N2)
// vector<int> find_union(vector<int>& v1, vector<int>& v2){
//     vector<int> unionArr;
//     int n1 = v1.size();
//     int n2 = v2.size();
//     set<int> st;
//     for (int i = 0; i<n1; i++){
//         st.insert(v1[i]);
//     }
//     for (int i = 0; i<n2; i++){
//         st.insert(v2[i]);
//     }
//     for(auto it : st){
//        unionArr.push_back(it);
//     }
//     return unionArr;
// }

//Optimal
// TC = O(n1 + n2)
// SC = O(n1 + n2) for showing answer only not for solving problem
vector<int> find_union(vector<int>& v1, vector<int>& v2){
    int n1 = v1.size();
    int n2 = v2.size();
    int i = 0, j = 0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(v1[i]<=v2[j]){
            if(unionArr.size() == 0 || unionArr.back()!=v1[i]){
                unionArr.push_back(v1[i]);
            }
            i++; // move pointer no matter what
        }
        else{
            if(unionArr.size() == 0 || unionArr.back()!=v2[j]){
                unionArr.push_back(v2[j]);
            }
            j++; // move pointer no matter what
        }
    }
    while(i<n1){
        if(unionArr.size() == 0 || unionArr.back()!=v1[i]){
            unionArr.push_back(v1[i]);
        }
        i++;
    }
    while(j<n2){
        if(unionArr.size() == 0 || unionArr.back()!=v2[j]){
            unionArr.push_back(v2[j]);
        }
        j++;
    }
    return unionArr;
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

    vector<int> unionArr = find_union(v1, v2);
    for(auto it : unionArr){
        cout << it << " ";
    }

    return 0;
}