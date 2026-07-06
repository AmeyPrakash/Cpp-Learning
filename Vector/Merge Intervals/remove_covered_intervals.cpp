#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(), 
        [](auto &a, auto &b) {
            if(a[0] == b[0])
            return a[1]>b[1];

            return a[0]<b[0];
        }
        );
        int count = 1;
        int end1 = intervals[0][1];
        for(int i = 1; i < n; i++){
            if(intervals[i][1] > end1){
                count++;
                end1= intervals[i][1];
            }
        }
        return count;                
          
    }
};