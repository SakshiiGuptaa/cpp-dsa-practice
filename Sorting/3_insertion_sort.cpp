// Takes an element and place it at its correct position in the sorted array
// TC => 
/*
Worst case and better case => O(N^2)
Best case => O(N) when the array is already sorted
 */
#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for (int i=0; i <= n - 1; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
            cout << "runs" << endl;
        }
    }
}

int main(){

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}