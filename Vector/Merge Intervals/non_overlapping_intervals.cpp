#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        int start1 = intervals[0][0];
        int end1 = intervals[0][1];
        int rm = 0;
        for(int i = 1; i < n; i++){
            int start2 = intervals[i][0];
            int end2 = intervals[i][1];
            if(end1>start2){
                rm++;
                end1 = min(end1, end2);   // to keep the interval that ends first for comparison. 
            }
            else{
                end1 = end2;  //start will always be less than end so there is no need to update it.

            }
            
    
        }
        return rm;
        
    }
};