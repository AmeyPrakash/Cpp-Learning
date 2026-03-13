//claculate nCr binomial coefficient for n and r

//nCr= n! / r! * (n-r)!
#include <iostream>
using namespace std;


int fact(int n){
    int x = 1;
    for(int i = 1;i < n;i++){
        x *= i;
    }
 return x;
}
int nCr(int n, int r) {
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr = fact(n-r);
    return fact_n / (fact_r * fact_nmr);
}
int main(){
    int n = 10, r = 5;
    int y = nCr(n, r);
    cout << y << endl;
    return 0;
}