#include <bits/stdc++.h>
using namespace std;


int subset_sum(int a[], int n, int sum)
{
    int ss[n+1][sum+1];
    int i,j;
    for(i = 0; i <= n; i++)
        ss[i][0] = 1;
    for(j = 1; j <= sum; j++)
        ss[0][j] = 0;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= sum; j++){
            if(ss[i-1][j] == 1)
                ss[i][j] = 1;
            else
            {
                if(a[i-1] > j)
                    ss[i][j] = 0;
                else
                    ss[i][j] = ss[i - 1][j - a[i-1]];
            }
        }
    }

    return ss[n][sum];
}

int main()
{
    int n = 6;
    int a[6] = {21, 223, 1213, 325, 42, 237};
    int sum = 9;

    int result=subset_sum(a,n,sum);

    if(result)
        cout<<"Subset found\n";
    else
        cout<<"Subset not found\n";

    return 0;
}