#include<bits/stdc++.h>
using namespace std;

int camelcase(string s) {
    if(s.empty()) return 0;
    int count=1;
    for(char ch:s){
        if(ch>='A' && ch<='Z'){
            count++;
        }
    }
    return count;
}