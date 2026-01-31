#include<iostream>
using namespace std;
int main() {
    int n, i = 1, j;
    cout << "Enter number of rows: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << char(64 + i) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
}