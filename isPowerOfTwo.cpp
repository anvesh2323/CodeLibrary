#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n<=0)return 0;
    
    int count = 0;
    
    while(count<=1 and n>0){
        if(n&1) count++;
        n = n>>1;
    }
    
    return (count<=1) ? 1 : 0;
}

int main(){
    cout<<"Enter a number  = ";
    int n;
    cin>>n;

    cout<<" Checking whether number is Power of Two or not...\n";

    if(isPowerOfTwo(n)){
        cout<<"Number is power of two\n";
    }
    else {
        cout<<"Number is not a power of two\n";
    }

    return 0;
}