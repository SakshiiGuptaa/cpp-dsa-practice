#include<bits/stdc++.h>
using namespace std;

// TC = O(log10(n))
int reverse(int x) {
    int reverseD = 0;

    while(x != 0){

        int lastD = x%10;

        if(reverseD>INT_MAX/10 || reverseD<INT_MIN/10){
            return 0;
        }
        reverseD = reverseD*10 + lastD;
        x = x/10;

    }
    return reverseD;
}
int main(){

    return 0;
}