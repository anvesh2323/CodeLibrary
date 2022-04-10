#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

void toUpper(char& c){
    int n = 32;
    c = c & ~n;
}

int main(){
    cout<<"Enter string = ";
    string s;
    cin>>s;

    for(int i = 0; i<s.size(); i++){
        toUpper(s[i]);
    }

    cout<<"After Uppering the cases = "<<s;

    return 0;
}