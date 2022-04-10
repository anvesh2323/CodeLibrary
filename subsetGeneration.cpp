#include <iostream>

typedef unsigned long long ll;
using namespace std;
void generate_masks(ll to_mask)
{
    for (int mask = to_mask; mask;)
    {
        --mask &= to_mask;
        cout << mask <<endl;
    }
}

int main()
{
    generate_masks(7);
}