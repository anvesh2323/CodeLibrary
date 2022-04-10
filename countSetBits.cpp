#include<bits/stdc++.h>
using namespace std;

int countSetBits(int number){
    int totalSetBits = 0;

    while (number >0)
    {
        if( number & 1) totalSetBits ++;
        number = number >> 1;
    }
    return totalSetBits;
}

int main(){
    cout<<"Enter a number = ";
    int n;
    cin>>n;

    cout<<"Number of set bits are = "<<countSetBits(n)<<endl;

    return 0;
}