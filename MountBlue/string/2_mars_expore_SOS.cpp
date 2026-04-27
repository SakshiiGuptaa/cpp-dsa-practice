#include<bits/stdc++.h>
using namespace std;

int marsExploration(string s) {
    int count = 0;
    int n = s.size();
    for(int i=0 ; i<n ; i+=3){
        if(s[i]!='S') count++;
        if(s[i+1]!= 'O') count++;
        if(s[i+2]!= 'S') count++; 
    }
    return count;
}