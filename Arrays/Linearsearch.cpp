#include<iostream>
using namespace std;

int linearsearch(int x[],int sz,int target){
    for (int i = 0; i < sz; i++)
    {
        if(x[i]==target){
            return i;  //found
        }
    }
    

    return -1; //not found
}

int main(){
    int arr [] = {4,5,2,8,3,6,};
    int size = sizeof(arr)/sizeof(int);
    int target = 8;
    int y=linearsearch(arr,size,target);
    cout << y << endl;


    return 0;
} //time complexity O(n)