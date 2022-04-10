#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int count_number_of_ways(int score)
{
    int i;
    vector<int> result(score+1, 0);
    result[0] = 1;

    for(i = 3; i <= score; i++)
        result[i] = result[i] + result[i-3];

    for(i = 5; i <= score; i++)
        result[i] = result[i] + result[i-5];

    for(i = 10; i <= score; i++)
        result[i] = result[i] + result[i-10];

    return result[score];
}

int main(){
    cout<<"Enter a number = ";
    int n;
    cin>>n;
    int answer = count_number_of_ways(n);
    cout<<"Number of ways to reach are "<<answer<<endl;
    return 0;
}