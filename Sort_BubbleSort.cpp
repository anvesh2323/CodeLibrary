#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

void bubble_sort(int n, vector<int>& a)
{
    int i, j, temp =0;
    for(i=0; i <= n-2; i++) {
        for (j=0; j<= n-2-i; j++) {
            if(a[j+1]<a[j]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    cout<<"Enter length of the array : ";
    int n;
    cin>>n;

    cout<<"Enter numbers \n";
    vector<int> a(n);
    for(int i = 0; i<n; i++)cin>>a[i];

    cout<<"Sorted array = ";
    bubble_sort(n, a);
    for(int i = 0; i<n; i++)cout<<a[i]<<' ';

    return 0;
}