#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach
//TC = approx. O(N^2) and SC = O(1)
// vector<int> findTwoSum(vector<int>& nums, int target){
//     int n = nums.size();
//     for (int i = 0; i < n; i++){
//         for (int j = i + 1; j < n; j++){
//             if(nums[i]+nums[j] == target){
//                 return {i, j}; // return "YES" and the indices of the two numbers
//             }
//         }
//     }
//     return {-1,-1}; // No solution found -> return "No"
// }

//Better Approach
//Using Hash Map
//TC = O(N) and SC = O(N)
vector<int> findTwoSum(vector<int>& nums, int target){
    int n = nums.size();
    map<int, int> num_map;
    for (int i = 0; i < n; i++){
        int remaining = target - nums[i];
        if(num_map.find(remaining) != num_map.end()){
            return {num_map[remaining], i}; // return "YES" and the indices of the two numbers
        }
        num_map[nums[i]] = i; // Store the index of the current number in the map
    }
    return {-1,-1}; // No solution found -> return "No"
}

//Optimal Approach
//Using Two Pointers
//This approach will return only yes or no and not the indices of the two numbers
//because we need to sort the array first and sorting will change the indices of the numbers
// bool findTwoSum(vector<int>& nums, int target){
//     int n = nums.size();
//     sort(nums.begin(), nums.end()); // Sort the array
//     int left = 0, right = n - 1;
//     while (left < right){
//         int sum = nums[left] + nums[right];
//         if(sum == target){
//             return true; // return "YES"
//         } else if(sum < target){
//             left++; // Move the left pointer to the right
//         } else {
//             right--; // Move the right pointer to the left
//         }
//     }
//     return false; // No solution found -> return "No"
// }

int main(){
    // Your code goes here
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    vector<int> two_sum_index = findTwoSum(arr,target);
    if(two_sum_index.empty()){
        cout << "No two sum solution found." << endl;
    } else {
        cout << "Indices: " << two_sum_index[0] << ", " << two_sum_index[1] << endl;
    }
    return 0;
}