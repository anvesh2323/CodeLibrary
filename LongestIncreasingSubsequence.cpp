#include<bits/stdc++.h>
using namespace std;

int longest_increasing_subsequence(int a[], int n)
{
    int i, j;
    int lis[n];
    int max=0;

    for(i = 0; i < n; i++)
        lis[i] = 1;

    for(i = 1; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(a[i] > a[j] && lis[i] < lis[j]+1)
                lis[i] = lis[j]+1;
        }
    }

    for(i = 0; i < n; i++)
    {
        if(lis[i] > max)
            max = lis[i];
    }
    return max;
}

int main()
{
    int n = 6;
    int a[] = {5, 11, 3, 15, 30, 25};
    int result = longest_increasing_subsequence(a,n);

    cout<<"Number of terms in LIS is "<< result;
    return 0;
}