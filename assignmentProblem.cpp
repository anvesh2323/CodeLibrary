#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int count_set_bits(int n){
    int count = 0;
    while(n != 0){
        if((n & 1) == 1) count++;
        n = n>>1;
    }
    return count;
}

int assignJobs(vector<vector<int>> cost, int n){
    int maskMax = pow(2, n);
    vector<int> dp(maskMax, INT_MAX);
    dp[0] = 0;
    vector<int> mask(maskMax);
    for(int i = 0; i<n; i++)
        mask[i] = pow(2, i);

    for(int i = 0; i<maskMax; i++){
        int noOfSetBits = count_set_bits(mask[i]);
        for(int j = 0; j<n; j++){
            int shifted = 1<<j;
            if((mask[j] & shifted) == 0) {
                dp[mask[i] | shifted] = min(dp[mask[i] | shifted], (cost[noOfSetBits][j] + dp[mask[i]]));
            }
        }
    }
    for(int i = 0; i<maskMax; i++)cout<<dp[i]<<", ";
    return dp[maskMax - 1];
}


int main(){
    int n;   // number of peoples and jobs;
    cout<<"Enter number of Peoples ";
    cin>>n;

    vector<vector<int>> cost(n, vector<int> (n));
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            cin>>cost[i][j];
    
    int profit = assignJobs(cost, n);
    cout<<"Profit = "<<profit<<endl;
    return 0;
}