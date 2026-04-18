// Sample Input 0

// 6
// 1 4 4 4 5 3
// Sample Output 0

// 4
// if two id has same frequency then return the smallest one

#include <bits/stdc++.h>

using namespace std;
int migratoryBirds(vector<int> arr) {
    map<int,int> mpp;
    int n = arr.size();
    // Step 1: Frequency count
    for(int i=0 ; i<n ; i++){
        mpp[arr[i]]++;
    }
    
    // Step 2: Find max frequency
    int maxi = INT_MIN;
    for(auto it:mpp){
        if(it.second>maxi){
            maxi = it.second;
        }
    }
    // Step 3: Collect all birds with max frequency
    vector<int> v;
    for(auto it : mpp){
        if(it.second == maxi){
            v.push_back(it.first);
        }
    }
    // Step 4: Return the smallest ID among them
    int minvalue = INT_MAX;
    for(auto it :v){
        minvalue = min(minvalue,it);
    }
    return minvalue;
}

// Optimization Tip 💡
// Since map stores keys in sorted ascending order, you could skip Steps 3 & 4 entirely and grab the first key that matches maxi:
// for(auto it : mpp){
//     if(it.second == maxi)
//         return it.first; // smallest ID automatically, due to map ordering
// }