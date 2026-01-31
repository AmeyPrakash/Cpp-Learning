#include<iostream>
using namespace std;
int main() {
    int n, i, j, h = 1;
    cout << "Enter the number of rows: ";
    cin >> n;
    i = n;
    while (i >= 1)
    {
       j = i;
       h = i;
       while (j >= 1)
       {
        cout << h << " ";
        h++;
        j--;
       }
       cout << endl;
       i--;
    }
    
    return 0;
}