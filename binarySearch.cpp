#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int BinarySearch(vector<int>& nums, int target) {
    int len = nums.size();
    int start = 0;
    int end = len-1;
    int mid = (start+end)/2;
    
    for(int i = 0; i<= len/2; i++){
        if(target == nums[mid])return mid;
        
        if(target > nums[mid])
            start = mid+1;
        else 
            end = mid-1;
        mid = (start+end)/2;
    }
    
    return -1;
}