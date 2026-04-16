//Merge sort
// TC => O(NlogN) in all cases

//Mergesort takes -> O(logn) to divide the array into two halves and O(n) to merge the two halves. So, the overall time complexity of Merge Sort is O(nlogn) in all cases (worst, average and best) as merge sort always divides the array into two halves and takes linear time to merge two halves.
// SC => O(N) for the temporary array used for merging. The space complexity of Merge Sort is O(n) in all cases (worst, average and best) as it requires additional space for the temporary array used for merging.
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int r){
    int left = low;
    int right = mid+1;
    vector<int> temp;
    while(left<=mid && right<=r){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;           
    }
    while(right<=r){
        temp.push_back(arr[right]);
        right++;           
    }
    for(int i=low; i<=r ; i++){
        arr[i]=temp[i-low];
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if(l>=r){
        return;
    }
    // code here
    int mid = (l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr,l,mid,r);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}