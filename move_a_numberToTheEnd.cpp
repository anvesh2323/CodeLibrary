#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

void move_a_number(vector<int>& nums, int number) {
    int j = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != number) {
            nums[j++] = nums[i];
        }
    }
    for (;j < nums.size(); j++) {
        nums[j] = 0;
    }
}

int main(){
    cout<<"Enter length of the array = ";
    int n;
    cin>>n;
    vector<int> a(n);

    cout<<"Enter the array value = ";
    for(int i = 0; i<n; i++)cin>>a[i];

    int number = 0;
    cout<<"Enter the number to be moved to end of the array = ";
    cin>>number;

    move_a_number(a, number);

    cout<<"Array after moving the number = ";
    for(int i = 0; i<n; i++)cout<<a[i]<<" ";
}