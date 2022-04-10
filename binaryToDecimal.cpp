#include <bits/stdc++.h>
using namespace std;

void binary_to_decimal(int n)
{
    int decimalNumber = 0;
    int last = 0;

    int base = 1;

    while(n)
    {
        last = n % 10;
        n = n/10;
        decimalNumber += last*base;
        base = base*2;
    }

    cout<<decimalNumber<<endl;
}

int main()
{
    int n = 11001;
    binary_to_decimal(n);
    return 0;
}