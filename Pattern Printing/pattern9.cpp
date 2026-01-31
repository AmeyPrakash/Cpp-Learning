#include<iostream>
using namespace std;
int main() {
    int n, j, i = 1;
    cout << "Enter the number of rows: ";
    cin >> n;
    while (i <= n)
    {
        char ch = 'A';
        j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    
}