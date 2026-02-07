#include<iostream>
using namespace std;
int main() {
    int a = 1, b = a++, c = ++a;    
    cout << b << "  " << c << endl;

    return 0;
}