/*
    Question No: 2
    Title: Cade's max fair amount

    Question:
        "Cade" is a naughty boy and even careless. One day while walking he got a large amount of money.
    He decides to spend money as much as he can, since its not his money :D
    So he came to a fair which was unique in his home town.
    This fair's shops are surrounded in a circular order ( Just like a ring. ), and have some price to entre.
    Considering the case where Cade is standing in the centre, he decides to go to the contigugous shops which will lead him to spend max amount.

    Find how much max amount can be spent by Cade in that fair.


    Note:
            Here PRICE may be in NEGATIVE.

*/


// Variant of KADANE's algo

#include<bits/stdc++.h>
using namespace std;

int maxFairAmount(vector<int>& shops) {
    int total = 0, maxSum = shops[0], curMax = 0, minSum = shops[0], curMin = 0;
    for (int i = 0; i<shops.size(); i++) {
        int a = shops[i];
        curMax = max(curMax + a, a);
        maxSum = max(maxSum, curMax);
        curMin = min(curMin + a, a);
        minSum = min(minSum, curMin);
        total += a;
    }
    return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
}

int main(){
    vector<int> shops = {-12,23,243,11,-121,-23,34};

    cout<<"Max fair amount can be spent is = "<<maxFairAmount(shops);

    return 0; 
}
