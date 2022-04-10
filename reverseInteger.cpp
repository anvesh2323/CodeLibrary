#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int reverseInt(int n){
    int revNum = 0, rem = 0;
    while(n != 0)
    {
        rem = n % 10;
        revNum = revNum *10 + rem;
        n = n / 10;
    }
    return revNum;
}

int main()
{
    int n;

    cout<<"Enter an integer: ";
    cin>>n;

    cout<<"Reversed Number = "<<reverseInt(n);
    return 0;
}