#include<bits/stdc++.h>
using namespace std;

//Iterative approach
int search(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    if(n==1 && nums[0]==target){
        return 0;
    }

    int left = 0;
    int right = n-1;
    while(left<=right){

        int mid = (left+right)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(target>nums[mid]){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}

//TC = O(logn)
//Recursive approach
    // int bs(vector<int>& nums, int low, int high, int target){
    //     if(low>high){
    //         return -1;
    //     }

    //     int mid = (low+high)/2;
    //     if(nums[mid] == target){
    //         return mid;
    //     }
    //     else if(target > nums[mid]){
    //         return bs(nums,mid+1, high,target);
    //     }
    //     return bs(nums, low, mid-1, target);
    // }
    // int search(vector<int>& nums, int target) {
    //     int low = 0;
    //     int high = nums.size() - 1;
    //     return bs(nums, low, high, target);
    // }

int main(){
    return 0;
}