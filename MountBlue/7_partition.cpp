// vector<int> quickSort(vector<int> arr) {
//     int pivot = arr[0];
//     int n = arr.size();
//     int low =0, high = n-1;
//     int i = 0;
//     int j = n - 1;
//     while(i<j){
//         while(arr[i]<=pivot && i<= high-1){
//             i++;
//         }
//         while(arr[j]>pivot && j>= low+1){
//             j--;
//         }
//         if(i<j){
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[low],arr[j]);
//     return arr;
// }

// vector<int> quickSort(vector<int> arr) {
//     int pivot = arr[0];
    
//     vector<int> left, mid, right;
    
//     for (int x : arr) {
//         if (x < pivot)       left.push_back(x);
//         else if (x == pivot) mid.push_back(x);
//         else                 right.push_back(x);
//     }
    
//     // Combine: left + mid + right
//     vector<int> result;
//     for (int x : left)  result.push_back(x);
//     for (int x : mid)   result.push_back(x);
//     for (int x : right) result.push_back(x);
    
//     return result;
// }