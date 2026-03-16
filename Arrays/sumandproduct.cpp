#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,5,5,6,9,7};
    int size=sizeof(arr)/sizeof(int);
    int sum = 0;
    int product=1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "sum is " << sum << " and product is " << product << endl;
    


    return 0;
}