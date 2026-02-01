#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a Positive integer: ";
    cin >> n;
    bool x = 1;
    for(int i = 2; i < n; i++) {
        if (n % i == 0 ){
            x = 0;
            break;
        }
    }
    if(x == 1){
      cout << n << "is a prime number";
    }
    else{
      cout << n << "is not a prime number";
    }   
}