#include<bits/stdc++.h>
using namespace std;    

// Function to find the floor of x in the sorted array arr
int find_floor(vector<int>& arr, int n, int x){
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] <= x){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

// Function to find the ceil of x in the sorted array arr


// same as lower bound but we have to return the element at the index instead of the index itself