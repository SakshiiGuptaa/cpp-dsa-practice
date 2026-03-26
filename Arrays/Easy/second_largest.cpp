//Finding second largest element using brute-> better->optimal approach

#include<bits/stdc++.h>

using namespace std;

//Brute -> sort -> largest=arr[n-1], by traversing from end find slargest
//T.C = O(NlogN)+O(N)
// int second_largest(vector<int>& v){
//     sort(v.begin(), v.end());
//     int largest = v[v.size()-1];
//     int slargest = -1;
//     for (int i = v.size() - 2; i >= 0; i--){
//         if(v[i]!=largest){
//             slargest = v[i];
//             break;
//         }
//     }
//     return slargest;
// }

//Better -> first find largest by traversing, then find slargest by traversing
//T.C = O(N)+O(N)
// int second_largest(vector<int>& v){
    //     int largest = v[0], slargest = -1;
    //     for (int i = 1; i < v.size(); i++){
        //         if(v[i]>largest){
//             largest = v[i];
//         }
//     }

//     for (int i = 0; i < v.size(); i++){
    //         if(v[i]<largest && v[i]>slargest){
        //             slargest = v[i];
        //         }
        //     }
        //     return slargest;
        // }
        
        // Best Approach -> do both finding largest and slargest together
// Place largest = v[0]; slargest = INT_MIN or -1; update largest and slargest one after another
// T.C = O(N)

int second_largest(vector<int>& v){
    int largest = v[0], slargest = INT_MIN;
    for (int i = 1; i < v.size(); i++){
        if(v[i]>largest){
            slargest = largest;
            largest = v[i];
        }
        else if(v[i]>slargest && v[i]<largest){
            slargest = v[i];
        }
    }
    return slargest;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n ; i++){
        cin >> v[i];
    }

    int slargest = second_largest(v);
    cout << slargest;
    return 0;
}