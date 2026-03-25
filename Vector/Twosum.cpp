#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

// Two pointer O(nlogn)

#include<unordered_map>


// vector<int> twosum(vector<int>& nums, int target){
//     sort(nums.begin(), nums.end());

//     int i = 0, j = nums.size() - 1;

//     while (i < j)
//     {
//         int sum = nums[i] + nums[j];

//         if (sum > target)
//             j--;
//         else if (sum < target)
//             i++;
//         else
//             return {i, j};
//     }

//     return {};
// }

//OPTIMIZED (HASHING)
//  m.find() of unordered_map is O(1)
vector<int> twosum(vector<int>& nums, int target){
    unordered_map<int,int> m;
    vector<int> ans;

    for (int i = 0; i<nums.size() ; i++)
    {
        int first = nums[i];
        int second  = target-first;
        
        if (m.find(second)!=m.end()) //ITERATORs
        {
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first]=i;
        
    }
    return ans;

}

 
int main(){
    vector<int> arr = {2,5,7,11,15};
    vector<int> y = twosum(arr,9);
    for (auto i:y)
    {
        cout<<i<<endl;
    }
    
    return 0;
}
