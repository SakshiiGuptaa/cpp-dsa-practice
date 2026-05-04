#include<bits/stdc++.h>
using namespace std;

int viralAdvertising(int n) {
    int cumulative = 0, shared,liked;
    for(int i=1; i<=n ; i++){
        if(i==1){
            shared = 5;
        }
        else{
            shared = liked*3;
        }
        liked = shared/2;
        cumulative+=liked;
    }
    return cumulative;
}