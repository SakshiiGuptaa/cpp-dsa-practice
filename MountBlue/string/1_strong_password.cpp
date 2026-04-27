#include<bits/stdc++.h>
using namespace std;

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int countLower = 0;
    int countUpper = 0;
    int countDigits = 0;
    int countSC = 0;
    string specialChars = "!@#$%^&*()-+";
    
    for(int i=0 ; i<n ; i++){
        char character = password[i];
        
        if(character>='a' && character<='z'){
            countLower+=1;
        }
        if(character>='A' && character<='Z'){
            countUpper+=1;
        }
        if(isdigit(character)){
            countDigits+=1;
        }
        if(specialChars.find(character) != string :: npos){
            countSC+=1;
        }
    }
    int missingType = 0;
     if(countLower==0){
        missingType+=1;
    }
    if(countUpper==0){
        missingType+=1;
    } 
    if(countDigits==0){
        missingType+=1;
    }  
    if(countSC==0){
        missingType+=1;
    }

    int missingLength = max(0,6-n); // if length lesser than 6, Then, print the required digits and if greater than 6 or  equal to 6 then, print 0;
    
    return max(missingLength, missingType);
    
}