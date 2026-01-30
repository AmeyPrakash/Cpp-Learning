#include<iostream>
using namespace std;

int main() {
    int n, i = 1, h = 1 ;
    cout << "Enter the number of row: ";
    cin >> n;

    while (i <= n) {
        int j = 1;
    
        while (j <= n) {
            cout << h << " ";
            h++;
            j++;
        }
        cout <<endl;
        i++;
    }
    

    return 0;
}