// We can't say anything about the whole array location but yes the next element from the first will be store in contiguous manner
#include<bits/stdc++.h>
using namespace std;

int main(){

    // 1 D array
    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    
    // cout << arr[3];

    // 2 D array
    int arr[3][5];
    arr[1][3] = 78;
    cout << arr[1][3];
    return 0;
}