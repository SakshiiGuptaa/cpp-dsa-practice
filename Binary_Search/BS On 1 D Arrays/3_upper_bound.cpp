#include<bits/stdc++.h>
using namespace std;

// Function to find the upper bound of x in the sorted array arr
int find_UB(vector<int>& arr, int n, int x){
    int low = 0;
    int high = n - 1;
    int ans = x;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] > x){ // the only change is here, we have > in UB and >= in LB
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

    int index = find_UB(arr, n, x);
    cout << index << endl;
    return 0;
}