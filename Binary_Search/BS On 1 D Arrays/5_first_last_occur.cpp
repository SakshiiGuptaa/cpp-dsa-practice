#include<bits/stdc++.h>
using namespace std;

//Approach 1 -> using O(N) time complexity
// we can find the occurence by linearly traversing

// int first = -1, last = -1;
// for (int i = 0; i < n; i++){
//     if(arr[i]==x){
//         if(first == -1)
//         {
//             first = i;
//         }
//         last = i;
//     }
// }

//Using Lower bound and upper bound 

// int first_occur(vector<int>& nums, int target){
//     int n = nums.size();
//     int first = n;
//     int low = 0;
//     int high = n-1;
//     while(low <= high){
//         int mid = (low+high)/2;
//         if(nums[mid]>=target){
//             first = mid;
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//     }
//     if(first<n && nums[first]==target){
//         return first;
//     }
//     else{
//         return -1;
//     }
// }
// int last_occur(vector<int>& nums, int target){
//     int n = nums.size();
//     int last = n;
//     int low = 0;
//     int high = n-1;
//     while(low <= high){
//         int mid = (low+high)/2;
//         if(nums[mid]>target){
//             last = mid;
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//     }
//     if(last>=0 && nums[last-1]==target){
//         return last-1;
//     }
//     else{
//         return -1;
//     }
// }
// vector<int> searchRange(vector<int>& nums, int target) {

//     if(nums.size()==0){
//         return {-1, -1};
//     }
//     vector<int> ans;
//     int first = first_occur(nums, target);
        // if(first == -1){
        //     return {-1, -1};
        // }
//     int last = last_occur(nums, target);
//     ans.push_back(first);
//     ans.push_back(last);

//     return ans;
// }
    
//By Binary Search

int first_occur(vector<int>& nums, int target){
    int n = nums.size();
    int first = -1;
    int low =0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            first = mid;
            high = mid - 1;
        }
        else if(nums[mid]<target){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return first;
}
int last_occur(vector<int>& nums, int target){
    int n = nums.size();
    int last = -1;
    int low =0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            last = mid;
            low = mid +1;
        }
        else if(nums[mid]<target){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return last;
}
    int main()
    {

        return 0;
    }