#include <bits/stdc++.h>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b) {
    
    int n = bill.size();
    int sum = 0;
    for(int i=0; i<n ; i++){
        if(i!=k){
            sum += bill[i];
        }
    }
    int actualB = sum/2;
    if(actualB == b){
        cout << "Bon Appetit";
    }
    else{
        cout << b-actualB;
    }
}