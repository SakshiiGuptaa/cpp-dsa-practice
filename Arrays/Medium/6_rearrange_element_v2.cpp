#include<bits/stdc++.h>
using namespace std;

// arr = [-1,2,3,4,-5,-6,7,8];
//Number of positive and negative elements are different in the array
//so till they are equal do the same thing as positive->negative->positive->negative and so on
//and then, add the left overs as it is,


//Output of above input will be [2,-1,3,-5,4,-6,7,8]


//We will extend the brute force approah used in the v1 to solve this problem as well, we will just add the left overs at the end of the temp array
vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();

    // Brute approach taking O(N+N) TC 

    vector<int> pos;
    vector<int> neg;
    vector<int> temp(n);
    for(int i=0 ; i<n ; i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    // After storing elements in the pos and neg vector, we can change the elements directly in the original nums vector or array

    //SC = O(1) if we are changing the elements in the original array, otherwise SC = O(N) if we are using a temp array to store the rearranged elements

    if(pos.size() > neg.size()){
        for (int i = 0; i < neg.size(); i++){
            temp[2 * i] = pos[i];
            temp[2 * i + 1] = neg[i];
        }
        int index = 2 * neg.size();
        for (int i = neg.size(); i<pos.size(); i++){
            temp[index] = pos[i];
            index++;
        }
    }
    else{
        for (int i = 0; i < pos.size(); i++){
            temp[2 * i] = pos[i];
            temp[2 * i + 1] = neg[i];
        }
        int index = 2 * pos.size();
        for (int i = pos.size(); i<neg.size(); i++){
            temp[index] = neg[i];
            index++;
        }
    }

    return temp;
}
