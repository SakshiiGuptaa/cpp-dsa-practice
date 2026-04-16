// Step 1
// Select minimums and swap

//Step 2
// the first element will be sorted and will be at the correct position
// the rest of the elements will be unsorted
// Then, start from the second element and repeat the process until the entire array is sorted

#include<bits/stdc++.h>
using namespace std;

vector<int> selection_sort(vector<int>& arr){
    int n = arr.size();

    for (int i = 0; i <= n-2; i++){
        int min_index = i;
        for (int j = i; j <= n-1; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    return arr;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> sorted_arr = selection_sort(arr);
    for (int i = 0; i < n; i++){
        cout << sorted_arr[i] << " ";
    }

    return 0;
}