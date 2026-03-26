// Array inside int main will have max size as 10^6 and globally as 10^7
// if we generate array inside int main then, it will have garbage value, globally it will have 0 as value.


//Approach
//Brute -> sort, print last element
//Time complexity -> O(NlogN)

//Optimal -> store largest element using largest variable, traverse the srrays if found any element greater than largest then, update largest
//Time complexity -> O(N)

#include<bits/stdc++.h>

using namespace std;

int largest_element(const vector<int>& v){
    int largest = v[0];
    for (int i = 1; i < v.size(); i++){
        if(v[i]>largest){
            largest = v[i];
        }
    }
    return largest;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int largest = largest_element(v);
    cout << "The largest element is:"<<largest;
    return 0;
}