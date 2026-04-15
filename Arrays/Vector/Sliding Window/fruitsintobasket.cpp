#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int fruits(vector<int> &nums){
    int low = 0, high = 0;
    int res = INT_MIN;
    int n = nums.size();
    unordered_map < int , int > f;
    for (high = 0; high < n; high++)
    {
        f[nums[high]]++;
        
        while (f.size() > 2)
        {
            f[nums[low]]--;
            if (0 == f[nums[low]])
                f.erase(nums[low]);
            
            low++;
            
        }
        int len = high-low+1;
        res=max(res,len);
    }    

    return res;
}

int main(){
    vector<int> x= {0,1,2,2};
    cout<<fruits(x)<<endl;
}