// Not contiguous 

// stores value and next pointer

#include<bits/stdc++.h>
using namespace std;

int main(){

    int x = 2;
    int *y = &x; // y storing the memory location or address of x
    cout << y; //0xb833dffbc4

    return 0;
}