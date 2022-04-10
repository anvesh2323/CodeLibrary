#include <iostream>
using namespace std;

int hammingDistance(int x, int y)
{
    int temp = x ^ y;
    int count = 0;
    while (temp)
    {
        temp = temp & (temp - 1);
        count++;
    }
    return count;
}

int main(){
    int x, y;
    x = 32;
    y = 23;
    int ans = hammingDistance(x, y);

    cout<<ans;
    return 0;
}



//////
// Here The Hamming distance between two integers is the number of positions
// at which the corresponding bits are different.