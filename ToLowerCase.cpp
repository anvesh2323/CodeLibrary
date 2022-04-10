#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

void toLower(char& c){
    int n = 32;
    c = c|n;
}

int main(){
    cout<<"Enter string = ";
    string s;
    cin>>s;

    for(int i = 0; i<s.size(); i++){
        toLower(s[i]);
    }

    cout<<"After Lowering the cases = "<<s;

    return 0;
}