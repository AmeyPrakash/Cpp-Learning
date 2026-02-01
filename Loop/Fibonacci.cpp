#include<iostream>
using namespace std;

int main() {
    int n;
    cout << " Enter the number of terms: ";
    cin >> n;
    int x =0, y = 1, z;
    cout << x << " " << y << " ";
    for(int i = 2;i < n; i++){
        z = x + y;
        cout << z << " ";
        x = y;
        y = z;
    }
    return 0;
}