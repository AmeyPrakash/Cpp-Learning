#include<iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter the number of rows: ";
    cin >> n;
    i = n;
    while (i >= 1) {
        int j = i;
        while (j >= 1) {
            cout << i << " ";
            j--;
        }
        cout << endl;
        i--;
    }
    
    return 0;
}