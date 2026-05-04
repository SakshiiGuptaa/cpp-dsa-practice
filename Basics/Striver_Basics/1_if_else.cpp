#include<bits/stdc++.h>
using namespace std;
/*
age < 18 => "Not eligible for job"
18 <= age <= 55 => "Eligible for job"
55 <= age <= 57 => "Eligible for job, but retirement soon" 
57 < age => "Not Eligible for job"
*/

int main(){
    int age;
    cin >> age;

    if(age < 18){
        cout << "Not eligible for job";
    }
    else if(age <= 55){
        cout << "Eligible for job";
    }
    else if(age <= 57){
        cout << "Eligible for job, but retirement soon";
    }
    else{
        cout << "Not Eligible for job";
    }
    return 0;
}