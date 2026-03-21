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
// int majorityelement(vector<int> &nums){ 
//     int n= nums.size();
//     int freq = 1;
//     int ans = nums[0];
//     sort(nums.begin(),nums.end());
//     for (int i = 1; i < n; i++)
//     {
//         if (nums[i]=nums[i-1])
//         {
//             freq++;
//         }
//         else{
//             freq = 1;
//             ans = nums[i];
//         }
//         if (freq>n/2){
//             return ans;
//         }
        
//     }return ans;
    
//MOORE's VOTING ALGORITHM
//A simple loop will start with element at zeroth index elements' feq

// same element freq++ diff element freq--
//because majority element is occupying more than half space therefore its freq will never be zero or negative


int majorityelement(vector<int> &nums){ 
    int n= nums.size();
    int freq = 0;
    int ans=0;

    for (int i=0;i<n;i++)
    {
        if (freq==0)
        {
            ans = nums[i];
        }
        else if (ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;


}




int main(){

    return 0;
}