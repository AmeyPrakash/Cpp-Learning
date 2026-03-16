#include<iostream>
using namespace std;

int main(){
    int arr[]={4,5,6,3,2};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int size=sizeof(arr)/sizeof(int);
    int ind1,ind2;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<smallest){
            smallest=arr[i];
            ind1=i;
            
        }
        if(arr[i]>largest){
            largest=arr[i];
            ind2=i;
        }
    }
    swap(arr[ind1],arr[ind2]);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i] << " ";
    }
    

    return 0;
}