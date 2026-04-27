#include<bits/stdc++.h>
using namespace std;

//In c++
// we can find the lower bound as ->
// lower_bound(arr.begin(), arr.end(), x) - arr.begin();

// Function to find the lower bound of x in the sorted array arr
int find_LB(vector<int>& arr, int n, int x){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low + high) / 2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int index = find_LB(arr, n, x);
    cout << index << endl;
    return 0;
}