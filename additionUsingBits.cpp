#include <iostream>
using namespace std;

int bitwiseAddition(int n, int m)
{
    while (m != 0)
    {
        int carry = n & m;  
        n = n ^ m;          
        m = carry << 1;     
    }
    return n;
}

int bitwiseAdditionRecursive(int n, int m)
{
    if (m == 0)
        return n;
    else
    {
        int carry = n & m;
        return bitwiseAdditionRecursive(n ^ m, carry << 1);
    }
}

int main(){
    int n = 32;
    int m = 23;

    int sum1 = bitwiseAddition(n,m);
    cout<<sum1;

    int sum2 = bitwiseAdditionRecursive(n,m);
    cout<<sum2;

    return 0;
}