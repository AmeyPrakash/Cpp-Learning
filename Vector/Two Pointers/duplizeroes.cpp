#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zeroes = 0;
        for(int j = 0;j<n;j++){
            if(arr[j] == 0){
                zeroes++;
 
            }
        }
        int m = n + zeroes;  // new size;
        arr.resize(m);
        int low = n-1, high = m-1;
        while(low >= 0){
            if(high < n){
                arr[high] = arr[low];
            }
            if(arr[low] == 0){
                high--;
                if(high<n){
                    arr[high] = 0;
                }
            }
            low--;
            high--;
            
        }
        arr.resize(n);



        
    }
};