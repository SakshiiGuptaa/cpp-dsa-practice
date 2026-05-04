#include<bits/stdc++.h>
using namespace std;
string catAndMouse(int x, int y, int z) {

    int distance_A_C = abs(z-x);
    int distance_B_C = abs(z-y);
    
    if(distance_A_C > distance_B_C){
        return "Cat B";
    }
    else if(distance_A_C < distance_B_C){
        return "Cat A";
    }
    else{
        return "Mouse C";
    }
}
int main(){ 


    return 0;
}