#include <iostream>
using namespace std;
#include <climits>

int main(){
    
    int size = 6;
    int largest = INT_MIN;
    int arr[size] = {5,15,22,1,-15,24};
    for (int i = 0; i < size; i++)
    {
        largest = max(arr[i], largest);
    }    
    cout << largest << endl;
    return 0;
}