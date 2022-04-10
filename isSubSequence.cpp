#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

bool isSubsequence(string s, string t) {
    int n = s.length(),m=t.length();
    int j = 0; 
    for (int i = 0; i < m and j < n; i++)
        if (s[j] == t[i])
            j++;
    return (j == n);
}

int main(){
    cout<<"Enter main String ";
    string s;
    cin>>s;

    cout<<"Enter the string to check for subsequence ";
    string t;
    cin>>t;

    if(isSubsequence(s, t)){
        cout<<"Yes, the given string is a subsequence\n";
    }
    else 
        cout<<"No, the given string is not a subsequence\n";
    return 0;
}