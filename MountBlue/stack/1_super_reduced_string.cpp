#include <bits/stdc++.h>
using namespace std;

string superreducedstring(string s){
    stack<char> st;

    for(char c : s){
        if(!st.empty() && st.top() == c){
            st.pop();
        }
        else{
            st.push(c);
        }
    }

    if(st.empty()) return "Empty String";

    string result;
    while(!st.empty()){
        result += st.top();
        st.pop();
    }
    return result;
}