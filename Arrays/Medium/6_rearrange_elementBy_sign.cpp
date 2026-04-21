#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();

    //Optimal Approach
    vector<int> temp(n);
    int posIN =0;
    int negIN =0;

    for(int i=0; i<n ; i++){
        if(nums[i]>0){
            temp[2*posIN]=nums[i];
            posIN +=1;
        }
        else{
            temp[2*negIN+1]=nums[i];
            negIN +=1;
        }
    }

    //Brute approach taking O(N+N/2) TC 
    // vector<int> pos;
    // vector<int> neg;
    // vector<int> temp(n);
    // for(int i=0 ; i<n ; i++){
    //     if(nums[i]>0){
    //         pos.push_back(nums[i]);
    //     }
    //     else{
    //         neg.push_back(nums[i]);
    //     }
    // }

    // for(int i=0 ; i<n/2; i++){
    //     temp[i*2]=pos[i];
    //     temp[i*2+1]=neg[i];
    // }
    return temp;
}
