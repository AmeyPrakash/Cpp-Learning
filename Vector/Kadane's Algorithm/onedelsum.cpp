#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int no_del = arr[0];
        int one_del = INT_MIN;
        int res = arr[0];
        for(int i = 1; i<n ; i++){
            int prev_no_del = no_del;  //to save prevoius answers.
            int prev_one_del = one_del;

            no_del = max(no_del + arr[i], arr[i]);//no deletion
            
            //performing deletion, gives 2 cases
            int x;
            //case 1  :: Already deleted
            if(prev_one_del == INT_MIN){
                x = arr[i];
            }
            else{
                x = prev_one_del + arr[i];
            }
            // case 2 :: delete arr[i]
            one_del =max(x, prev_no_del);
            //max ans.
            res = max(res, max(one_del, no_del));
        }
        return res;

    }
};
int main() {
    Solution s;
    vector<int> arr = {1,-2,0,3};
    cout<<s.maximumSum(arr)<<endl;
    return 0;
}