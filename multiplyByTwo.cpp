#include<iostream>

using namespace std;

unsigned multiplyWith2(unsigned n) {  
    return (n << 1);
}                  

int main(){
    cout << multiplyWith2(8) << endl;
    cout << multiplyWith2(15) << endl;
    return 0;
}