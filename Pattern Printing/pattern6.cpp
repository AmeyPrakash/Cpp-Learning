#include<iostream>
using namespace std;

int main() {
    int n, i = 1, j, h = 1;
    cout << "Enter the number of rows: ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        h = i;
        while (j <= i)
        {
            cout << h << " ";
            h++;
            j++;
        }
        cout << endl;
        i++;
        
    }
    
    return 0;
}