#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {

        vector<vector<int>> res;

        int n= firstList.size(), m = secondList.size();
        int i = 0, j = 0;   //two pointers i for first and j for second list
        while(i < n && j < m){

            int start1 = firstList[i][0];
            int end1 = firstList[i][1];
            int start2 = secondList[j][0];
            int end2 = secondList[j][1];
            //intersection.
            int s = max(start1, start2);
            int e = min(end1, end2);

            if(s <= e){ //overlap
                res.push_back({s, e});
            }
            if(end1 < end2){ //move pointer of  list  which ends first
                i++;
            }
            else{
                j++;
            }
                
        }
        return res;
        
    }
};