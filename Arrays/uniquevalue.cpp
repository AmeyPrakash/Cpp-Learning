#include<iostream>
using namespace std;

int main(){
    int arr[]={4,2,5,6,7,8,4,7,2,8,4};
    int size=sizeof(arr)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        int appeared = 0;
        for (int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
               appeared++;
            }
        }
        if (appeared==1)
    { 
        cout<<arr[i]<<" ";
        
    }    
    }
    
    
    
    return 0;
}