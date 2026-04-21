#include<bits/stdc++.h>
using namespace std;

//BETTER APPROACH
// TC = O(NlogN) + O(N) = O(NlogN) and SC = O(1)
int find_longest_consecutive_sequence(vector<int>& nums){
    if(nums.empty()) return 0;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int longestCount = 1;
    int count = 1;
    for(int i=0 ; i<n-1 ; i++){
        if(nums[i+1]==nums[i]+1){
            count++;
            longestCount = max(longestCount,count);
        }
        else if(nums[i+1]==nums[i]){
            continue;//skipping the duplicates values
        }
        else{
            count = 1;
        }
    }
    return longestCount;
}

//OPTIMAL APPROACH using set
// TC = O(N) and SC = O(N)
int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    int longestCount = 0;
    unordered_set<int> st;
    for(int i=0; i<n ; i++){
        st.insert(nums[i]);
    }
    for(int num:nums){
        //not found
        if( st.find(num-1) == st.end() ){
            int currentNum = num;
            int count = 1;
            //next number found
            while( st.find(currentNum+1) != st.end() ){
                count++;
                currentNum++;
            }
            longestCount = max(longestCount, count);
        }
    }
    return longestCount;
}


int main(){

    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n ; i++){
        cin >> nums[i];
    }
    int sequence = find_longest_consecutive_sequence(nums);
    cout << sequence << endl;
    return 0;
}