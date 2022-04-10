#include <iostream>
using namespace std;

int turnOnIthBit(int n, int i){
    n = (n | (1 << i));
    return n;
}

int main() {
	int n, i;
	cin >> n >> i;
	cout<< turnOnIthBit(n, i) <<endl;
	return 0;
}