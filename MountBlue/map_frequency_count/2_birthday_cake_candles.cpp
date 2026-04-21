//Better
// int birthdayCakeCandles(vector<int> candles) {
//     map<int,int> mpp;
//     int n = candles.size();
//     for(int i = 0; i < n; i++){
//         mpp[candles[i]]++;
//     }
//     return mpp.rbegin()->second; // rbegin() points to the last (highest) key
// }


//Optimized
// int birthdayCakeCandles(vector<int> candles) {
//     int maxi = INT_MIN, count = 0;
//     for(int x : candles){
//         if(x > maxi){
//             maxi = x;
//             count = 1;      // reset count
//         } else if(x == maxi){
//             count++;         // increment count
//         }
//     }
//     return count;
// }