#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>

//BRUTE FORCE
// int majorityelement(vector<int> &nums){
//     int n= nums.size();
//     for (int i: nums){
//         int freq=0;

//         for (int j:nums){
//             if(j==i){
//                 freq++;
//             }
            
//         }
//         if(freq>n/2){
//             return i;
//         } 
//     }   
    

//     return -1;
// }

//SORTING THEN LOOP
/*
We will first sort the array and then go through every element and if the element changes we will reset the freq;

*/
int majorityelement(vector<int> &nums){ 
    int n= nums.size();
    int freq = 1;
    int ans = nums[0];
    sort(nums.begin(),nums.end());
    for (int i = 1; i < n; i++)
    {
        if (nums[i]=nums[i-1])
        {
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
        if (freq>n/2){
            return ans;
        }
        
    }return ans;
    



}    
int main(){

    return 0;
}