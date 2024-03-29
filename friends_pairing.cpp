// Given n friends, each one can remain single or can be paired up with some other friend.
// Each friend can be paired only once.
// Find out the total number of ways in which friends can remain single or can be paired up.

#include <bits/stdc++.h>
using namespace std;

int countFriendsPairings(int n)
{
    int table[n+1];
 
    // Filling the table recursively in bottom-up manner
    for(int i = 0; i <= n; ++i)
    {
        if(i <= 2)
            table[i] = i;
        else
            table[i] = table[i-1] + (i-1) * table[i-2];
    }
 
    return table[n];
}

// Driver code
int main()
{
    int n = 7;
    cout << countFriendsPairings(n) << endl;

    return 0;
}