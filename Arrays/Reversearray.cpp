#include<iostream>
using namespace std;

/*Two pointer concept
first element at last and last element at first , we can just swap them .
we can just use the swap function provided by cpp i.e. swap(val1,val2)

increase start one by one starting from 0 and will be updated. we will take two variables start and end start will increase and end will decrease.
start++ and end--.
swap(arr[start],arr[end])
till 

1st case  
start > end   [1 2  3 4]
2nd case   
start = end
therefore   start <= end
then we can do 
while [start , end].


*/
void reverse(int arr[],int sz){
    int start = 0, end = sz-1;
    while (start<end)
    {
       swap(arr[start],arr[end]);
       start++;
       end--;   
    }
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size =sizeof(arr)/sizeof(int);
    reverse(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//time complexity O(n)