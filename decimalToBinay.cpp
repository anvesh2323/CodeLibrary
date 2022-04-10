#include <bits/stdc++.h>
using namespace std;

void decimal_to_binary(int n)
{
    int binary[50];
    int i = 0;
    int j;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout<<"Binary number is\n";
    for (j = i - 1; j >= 0; j--)
        cout<<binary[j];
}

int main()
{
    int n = 23;
    decimal_to_binary(n);
    return 0;
}