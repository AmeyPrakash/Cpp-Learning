#include <iostream>
using namespace std;
#include <climits>

int main(){
    int index = 0;
    int size = 6;
    int largest = INT_MIN;
    int arr[size] = {5,15,22,1,-15,24};
    for (int i = 0; i < size; i++)
    {
         if (arr[i] > largest)
        {
            largest = arr[i];
            index = i;
        }
    }
    cout << index << endl;
    cout << largest << endl;
    return 0;
}