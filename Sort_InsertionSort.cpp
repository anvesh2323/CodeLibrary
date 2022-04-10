#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

void insertion_sort(int n, vector<int>& a)
{
    int i, j;
    int v;
    for(i=1; i <= n-1; i++) {
        v = a[i];
        j = i-1;
        while( j >= 0 && a[j] > v){
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = v;
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
    insertion_sort(n, a);
    for(int i = 0; i<n; i++)cout<<a[i]<<' ';

    return 0;
}