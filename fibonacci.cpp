#include <bits/stdc++.h>
using namespace std;


int fibo(int n)
{
    int fib[n+1];
    int i;
    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n + 1; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    return fib[n];
}


int main()
{
    int n;
    int result;
    cout<<"Enter the required nth number in fibonacci series: ";
    cin>>n;

    if (n == 0)
        result = 0;
    else
        result = fibo(n);
    cout<<"The "<<n <<" number in fibonacci series is "<<result;

    return 0;
}