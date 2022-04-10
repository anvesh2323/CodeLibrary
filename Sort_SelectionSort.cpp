#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

void selection_sort(int n, vector<int>& a)
{
    int i, j, temp =0;
    int min;
    for(i=0; i <= n-2; i++) {
        min = i;
        for (j=i+1; j<= n-1; j++) {
            if(a[j]<a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
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
    selection_sort(n, a);
    for(int i = 0; i<n; i++)cout<<a[i]<<' ';

    return 0;
}