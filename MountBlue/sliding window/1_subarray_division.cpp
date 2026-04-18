// Sample Input 1

// 6
// 1 1 1 1 1 1
// 3 2
// Sample Output 1

// 0
// Explanation 1

// Lily only wants to give Ron m=2 consecutive squares of chocolate whose integers sum to d=3. There are no possible pieces satisfying these constraints:
#include <bits/stdc++.h>
using namespace std;

int birthday(vector<int> s, int d, int m) {
    int count = 0 ;
    int n = s.size();
    for(int i=0 ; i<=n-m ; i++){
        int sum = 0;
        for(int j=i ; j<i+m ; j++){
            sum+=s[j];
        }
        if(sum == d){
            count++;
        }
    }
    return count;
}