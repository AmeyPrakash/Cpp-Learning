#include<iostream>
using namespace std;

int main() {
    int n, i, j, h;
    cout << "Enter the no. of rows: ";
    cin >> n;
    i = n;
    h = n * n;
    while (i >= 1){
        j = n;
        while (j >= 1) {
            cout << h << " ";
            h--;
            j--;
        }
        cout << endl;
        i--;
    }
    
    
    return 0;
}