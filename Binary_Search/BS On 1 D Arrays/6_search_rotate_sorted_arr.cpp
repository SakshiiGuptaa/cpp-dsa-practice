#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach -> O(N) time complexity
// we can find the target by linearly traversing the array and return the index if found


// Function to search for a target element in a rotated sorted array
//TC = O(log n) and SC = O(1)
int search(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && target<=nums[mid]){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(nums[mid]<=target && nums[high]>=target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    return 0;
}