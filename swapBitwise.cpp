#include<bits/stdc++.h>
using namespace std;

int main()
{
  int x = 120;
  int y = 210;

  x = x ^ y;
  y = x ^ y;
  x = x ^ y;
  cout<<"Swapped Items: x = "<<x<<" y = "<<y;

  return 0;
}