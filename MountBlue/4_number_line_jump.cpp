// Number Line Jumps

// You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

// The first kangaroo starts at location  and moves at a rate of  meters per jump.
// The second kangaroo starts at location  and moves at a rate of  meters per jump.
// You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.

// Sample Input 1

// 0 2 5 3
// Sample Output 1

// NO
// Explanation 1

// The second kangaroo has a starting location that is ahead (further to the right) of the first kangaroo's starting location (i.e., ). Because the second kangaroo moves at a faster rate (meaning ) and is already ahead of the first kangaroo, the first kangaroo will never be able to catch up. Thus, we print NO.

// string kangaroo(int x1, int v1, int x2, int v2) {
//     if(x2>x1 && v2>v1){
//         return "NO";
//     }
//     else if(x1>x2 && v1>v2){
//         return "NO";
//     }
//     if(v1 == v2){
//         return x1 == x2 ? "YES" : "NO";
//     }
//     if((x1-x2)%(v1-v2) != 0) return "NO";
//     return "YES";
// }