#include<stdio.h>
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int partiton(vector<int> &nums, int left, int right){
    
    int pivot = nums[right];
    int j = left - 1;
    
    for(int i = left; i<right; i++){
        if(nums[i]<pivot){
            j++;
            swap(nums[i], nums[j]);
        }
        
    }
    swap(nums[j+1], nums[right]);
    
    return j+1;
}

vector<int> QuickSort(vector<int> &nums, int left, int right){
    if(left < right){
        int pi = partiton(nums, left, right);
        
        QuickSort(nums, left, pi-1);
        QuickSort(nums, pi+1, right);
    }
    
    return nums;
}

int main() { 
    vector<int> nums = {23,43,12,56,11};
    cout<<" Before SORT \n";
    for(auto itr: nums){
        cout<<itr<<" ";
    }
    cout<<endl;

    nums = QuickSort(nums, 0, nums.size()-1);

    cout<<" After SORT \n";
    for(auto itr: nums){
        cout<<itr<<" ";
    }

    return 0;
}