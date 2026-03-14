#include <iostream>
using namespace std;
#include <climits>

int main(){
    int size = 6;
    int smallest = INT_MAX;
    int arr[size] = {5,15,22,1,-15,24};
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] < smallest)
        // {
        //     smallest = arr[i];
        // }
        smallest = min(arr[i], smallest);
    }
    cout << smallest << endl;
    


    return 0;
}