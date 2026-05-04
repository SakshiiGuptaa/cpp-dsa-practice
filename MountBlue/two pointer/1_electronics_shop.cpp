//using brute force
#include<bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
    sort(keyboards.begin(), keyboards.end(), greater<int>());
    sort(drives.begin(), drives.end(), greater<int>());
        
    int n = drives.size();
    int maxmoneySpent = -1;
    for(int keyB : keyboards){
        for(int i=0 ; i<n ; i++){
            int currentSpent = drives[i]+keyB;
            if(currentSpent <= b){
                maxmoneySpent = max(currentSpent,maxmoneySpent); 
                break;
            }
        }
    }
    return maxmoneySpent;
}

//using two pointer

int getMoneySpentOptimal(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
    sort(keyboards.begin(), keyboards.end());
    sort(drives.begin(), drives.end(), greater<int>());
    
    int i=0, j=0;
    int n = keyboards.size();
    int m = drives.size();
    
    int result = -1;
    while(i<n && j<m){
        int currentB = keyboards[i]+drives[j];
        if(currentB <= b){
            result = max(result,currentB);
            i++;
        }
        else{
            j++;
        }  
    }
    return result;
}