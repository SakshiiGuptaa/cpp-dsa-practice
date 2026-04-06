#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach
//TC = O(NlogN) and SC = O(N) used in merge sort algorithm

vector<int> merge_sort(vector<int>& arr){
    sort(arr.begin(), arr.end());
    return arr;
}

//Better Approach
//Using 3 count variables to count the number of 0s, 1s and 2s in the array
//TC = O(2N) and SC = O(1)

// vector<int> sort_using_counting(vector<int>& arr){
//     int count0 = 0, count1 = 0, count2 = 0;
//     for(auto it: arr){
//         if(it ==0)
//             count0++;
//         else if(it == 1)
//             count1++;
//         else
//             count2++;
//     }
//     vector<int> sorted_array;
//     for (int i = 0; i < count0; i++){
//         sorted_array.push_back(0);
//     }
//     for(int i = 0; i < count1; i++){
//         sorted_array.push_back(1);
//     }
//     for(int i = 0; i < count2; i++){
//         sorted_array.push_back(2);
//     }
//     return sorted_array;
// }

//Optimal Approach
//TC = O(N) and SC = O(1)

void using_dutch_national_flag(vector<int>& arr){
    int low=0, mid=0, high = arr.size() - 1;
    while(mid<= high){
    if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        mid++;
        low++;
    }
    else if(arr[mid]==1){
        mid++;
    }
    else{
        swap(arr[mid],arr[high]);
        high--; 
    }
    }
}

int main(){
    // Your code goes here
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // vector<int> array_sorted = merge_sort(arr);
    // vector<int> array_sorted = sort_using_counting(arr);
    using_dutch_national_flag(arr);
    for(auto it : arr){
        cout << it << " ";
    }
    return 0;
}