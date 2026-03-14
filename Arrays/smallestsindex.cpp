#include <iostream>
#include <climits>
using namespace std;

int main(){
    int size = 6;
    int index = 0;
    int smallest = INT_MAX;
    int arr[size] = {5,15,22,1,-15,24};

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            index = i;
        }
    }

    cout << smallest << endl;
    cout << index << endl;

    return 0;
}