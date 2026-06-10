#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size(), one = 0, zero =0, res = 0;
        unordered_map<int,int> f;
        for(int i = 0;i<n; i++){
            if(0 == nums[i]){ //zero count
                zero++;
            }
            else{     //one count
                one++;
            }
            int diff = zero - one;  //count zero - count one
            if(0 == diff){          //if diff = 0
                res = max(res, i+1); //res update i+1 ; becoz array length indexed 0;   
            }
            if(f.find(diff) == f.end()) {
                f[diff] = i;  //if the diff is not in map push it with the index as value;
            }
            else{
                int idx = f[diff];   //if present then taking the index from the map
                res = max(res, i - idx);  //max subarray 
            }
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<int> arr = {0,1,1,1,1,1,0,0,0};
    cout<<s.findMaxLength(arr)<<endl;
    return 0;
}