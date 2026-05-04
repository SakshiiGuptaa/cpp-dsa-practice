#include<bits/stdc++.h>
using namespace std;

int reversed(int n){
    int reversedD = 0;
    while(n>0){
        int lastDigit = n%10;
        reversedD = reversedD*10 + lastDigit;
        n = n/10;
    }
    return reversedD;
}
int beautifulDays(int i, int j, int k) {
    
    int count = 0;
    for(int index = i ; index<=j ; index++){
        
        int difference = abs(index-reversed(index));
        if(difference%k == 0){
            count ++;
        }
    }
    return count;
}