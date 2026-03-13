#include <iostream>
using namespace std;

int sumofdigits(int num){
    int digitsum = 0;

    while(num > 0){
        int lastdig = num % 10;
        num /= 10;
        digitsum += lastdig;

    }
    return digitsum;
}

int main() {
    cout << "sum of digits = " << sumofdigits(120) << endl;

    return 0;
}