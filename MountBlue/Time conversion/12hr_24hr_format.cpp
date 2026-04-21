#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    
    string hr = s.substr(0,2);
     string min = s.substr(3,2);
     string sec = s.substr(6,2);
     string type = s.substr(8,2);
    string result;
    if(hr!= "12"){
        if(type == "PM"){
            result = to_string(12+stoi(hr))+":"+min+":"+sec;
        }
        else{
            result = hr+":"+min+":"+sec;
        }
    }
    else{
        if(type == "PM"){
            result = hr+":"+min+":"+sec;
        }
        else{
            result = (string)"00"+":"+min+":"+sec;
        }
    }
    return result;
}