#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int count = 0;
    while(n>0){

        count++;
        n = n / 10;

    }
    return count;
}
int main(){

    return 0;
}