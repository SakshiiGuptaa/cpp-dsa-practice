#include <bits/stdc++.h>
using namespace std;

int countingValleys(int steps, string path) {
    int valleys = 0;
    int altitude = 0;
    for(int i=0 ; i<steps ; i++){
        if(altitude==-1 && path[i]=='U'){
            valleys++;
        }
        if(path[i]=='U'){
            altitude++;
        }
        else{
            altitude--;
        }
    }
    return valleys;
}