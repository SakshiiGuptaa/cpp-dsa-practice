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

vector<int> sort_using_counting(vector<int>& arr){
    int count0 = 0, count1 = 0, count2 = 0;
    for(auto it: arr){
        if(it ==0)
            count0++;
        else if(it == 1)
            count1++;
        else
            count2++;
    }
    vector<int> sorted_array;
    for (int i = 0; i < count0; i++){
        sorted_array.push_back(0);
    }
    for(int i = 0; i < count1; i++){
        sorted_array.push_back(1);
    }
    for(int i = 0; i < count2; i++){
        sorted_array.push_back(2);
    }
    return sorted_array;
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
    vector<int> array_sorted = sort_using_counting(arr);
    for(auto it : array_sorted){
        cout << it << " ";
    }
    return 0;
}