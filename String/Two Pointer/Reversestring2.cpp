#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for(int i = 0; i < n; i += 2 * k){ // to switch between every 2k blocks and reverse their first k elements
            int low = i; 
            int high =min(i+k-1,n-1);// min is used so that our high doesnt go beyondd the size of array.
            while(low < high){
                swap(s[low],s[high]);
                    low++;
                    high--;
                
            }
        }
        return s;
        
    }
};
int main(){
    Solution s;
    string str = "abcdefg";
    int k =2;
    cout<<s.reverseStr(str,k);
    return 0;
}