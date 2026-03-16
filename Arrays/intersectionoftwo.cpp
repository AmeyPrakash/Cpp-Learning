#include<iostream>
using namespace std;

int main(){
    int arr1[]={11,21,32,5,9,15,47};
    int arr2[]={1,2,3,4,5,6,7,8,9};
    int size2=9;
    int size1=7;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                cout << arr1[i] << " ";
            }
            
        }
        
    }
    return 0;
}