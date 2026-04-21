#include <bits/stdc++.h>
using namespace std;

string caesarCipher(int n, string s, int k) {
    string result = "";
    for(int i=0 ; i<n ; i++){
        if(s[i]>='a' && s[i]<='z'){
            int currentpos = s[i]-'a';
            result += 'a'+(currentpos+k)%26;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            int currentpos = s[i]-'A';
            result += 'A'+(currentpos+k)%26;
        }
        else{
            result += s[i];
        }
    }
    return result;
}
