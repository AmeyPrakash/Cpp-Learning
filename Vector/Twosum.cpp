#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

// BRUTE FORCE

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> twosum(vector<int>& nums, int target){
    sort(nums.begin(), nums.end());

    int i = 0, j = nums.size() - 1;

    while (i < j)
    {
        int sum = nums[i] + nums[j];

        if (sum > target)
            j--;
        else if (sum < target)
            i++;
        else
            return {i, j};
    }

    return {};
}

int main(){
    vector<int> arr = {2,5,7,11,15};

    vector<int> y = twosum(arr, 9);

    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    }

    return 0;
}
