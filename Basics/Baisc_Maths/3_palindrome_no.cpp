#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {

    if(x<0 || (x%10 == 0 && x!=0)) return false;

    int reverse = 0;
    while( x > reverse ){
        int lastD = x % 10;
        reverse = reverse * 10 + lastD;
        x = x/10;
    }
    if(x == reverse || x == reverse/10){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    return 0;
}