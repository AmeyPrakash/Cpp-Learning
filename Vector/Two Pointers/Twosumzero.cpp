#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> result;
        int n = arr.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            int sum = arr[i] + arr[j];
            if(0==sum){
                result.push_back({arr[i],arr[j]});
                i++;
                j--;
                while(arr[i]==arr[i-1]){
                    i++;
                }
                while(arr[j]==arr[j+1]){
                    j--;
                }
            }
            else if(sum<0){
                i++;
            }
            else{
                j--;
            }
        }
        return result;
        
        
    }
};
