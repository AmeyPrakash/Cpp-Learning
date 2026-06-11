#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());

        int n = intervals.size();
        int start1 = intervals[0][0];
        int end1 = intervals[0][1];
        for(int i=1;i<n;i++){    //i from 1 because 0 is already taken in starting;
            int start2 = intervals[i][0];
            int end2 = intervals[i][1];

            if(end1>=start2){ //if overlap
                end1 = max(end1, end2);
                continue;
            }

            res.push_back({start1,end1}); // ans pushed
            start1 = start2; //updating for next interval.
            end1 = end2;
        }
        res.push_back({start1, end1}); //last remaining interval
        return res;// ans 
    }
};
int main(){
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    Solution s;
    vector<vector<int>> res = s.merge(intervals);
    // for(auto x: intervals){
    //     for(auto it: x){
    //         cout<<it<<endl;
    //     }
    // }
    
    for(auto x: res){
        cout<< x[0]<<" "<< x[1]<< endl;
    }
    return 0;

}