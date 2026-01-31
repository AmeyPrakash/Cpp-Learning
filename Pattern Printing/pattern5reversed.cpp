#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int h = 1;
    int i = n;

    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            cout << h << " ";
            h++;
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}
