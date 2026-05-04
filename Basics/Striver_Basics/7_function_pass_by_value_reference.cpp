#include<bits/stdc++.h>
using namespace std;

// PASS BY VALUE -> Here we pass the **copy** of the original value 
//Changes does not happen to the original value, but to the copy
// void dosomething(string s){
//     s[0] = 't';
//     cout << s << endl;
// }
// int main(){
//     string s = "raj";
//     dosomething(s);
//     cout << s << endl;
//     return 0;
// }
//OUTPUT
// taj
// raj

//PASS BY REFERENCE
// void dosomething(string &s){
//     s[0] = 't';
//     cout << s << endl;
// }
// int main(){
//     string s = "raj";
//     dosomething(s);
//     cout << s << endl;
//     return 0;
// }

// taj
// taj

//Array always passed with reference 

void doSomething(int arr[], int n){

    arr[0] += 5;
    cout << arr[0] << endl;
    
}

int main(){

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    doSomething(arr, n);
    cout << arr[0] << endl;
    return 0;

}