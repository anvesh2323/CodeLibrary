#include<bits/stdc++.h>
using namespace std;

void reverseString(string& s) {
    int len = s.size();
    for(int i = 0; i<len/2; i++){
        char temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
}

int main(){
    cout<<"Enter length of the string = ";
    int len;
    cin>>len;

    cout<<"Enter a string = ";
    string s;
    cin>>s;

    cout<<"String before reversing\n";
    cout<<s;

    cout<<"String after reversing\n";
    reverseString(s);
    cout<<s;

    return 0;
}