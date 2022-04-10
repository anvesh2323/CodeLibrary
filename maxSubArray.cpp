#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

/////////////////////////////////////////////
//     KADANE'S ALGORITHM
/////////////////////////////////////////////


int maxSubArray(vector<int>& nums) {
    int len = nums.size();
    int maxx = 0; int tmaxx = 0;
    bool onlyNegative = true;
    int negMaxx = INT_MIN;
    
    
    for(int i = 0; i<len; i++){
        if(nums[i]<0 and onlyNegative){
            negMaxx = max(negMaxx, nums[i]);
        }
        else onlyNegative = false;
        
        tmaxx = tmaxx + nums[i];
        if(tmaxx<0){
            tmaxx = 0;
        }
        else if(tmaxx > maxx){
            maxx = tmaxx;
        }
    }
    
    return onlyNegative ? negMaxx : maxx;
}

