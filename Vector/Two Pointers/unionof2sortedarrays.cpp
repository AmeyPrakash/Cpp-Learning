#include<iostream>
#include<vector>
using namespace std;


class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n=a.size(),m=b.size();
        vector<int> result;
        int start = 0,left = 0;
        
        while((start<n) && (left<m)){
            if(a[start]<=b[left]){
                
                if (result.empty() || result.back() != a[start]){
                    result.push_back(a[start]);
                }
                start++;
                
            }
            else{
                if (result.empty() || result.back() != b[left]){
                   result.push_back(b[left]);
                
                }
                
                left++;
            
            }
        }
        while(left<m){
            if (result.empty() || result.back() != b[left]){
                result.push_back(b[left]);
                
            }
            left++;
        }
        while(start<n){
            if (result.empty() || result.back() != a[start]){
                result.push_back(a[start]);
                    
            }
            start++;
        }
        return result;
        
    }
};