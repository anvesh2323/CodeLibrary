#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int rob(vector<int> nums) {
        
    if(nums.size()==0)
        return 0;
    if(nums.size()==1)
        return nums[0];
    
    int res[nums.size()];
    
    res[0]=nums[0];
    res[1]=max(nums[0],nums[1]);
    
    for(int i=2;i<nums.size();i++)
    {
        res[i]=max(res[i-1],nums[i]+res[i-2]);
    }
    
    return res[nums.size()-1];
    
}

int main(){
    cout<<"Enter number of houses = ";
    int n;
    cin>>n;
    vector<int> a(n);

    cout<<"Enter the house values = ";
    for(int i = 0; i<n; i++)cin>>a[i];

    cout<<rob(a);
    
    return 0;
}