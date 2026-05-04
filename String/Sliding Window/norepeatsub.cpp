#include<iostream>
#include<string>
using namespace std;
#include<unordered_map>


int norepeat(string s, int k){
    int low = 0, high =0;
    int res = 0;
    int n = s.size();
    unordered_map<char,int> f;

    for (high = 0; high < n; high++)
    {
        f[s[high]]++;
        k = high-low+1;
        while (f.size() < k)
        {
            f[s[low]]--;
            if (0 == f.size())
            {
                f.erase(s[low]);
            }
            low++;
            k=high-low+1; 
        }
        int len = high -low +1;
        res = max(res,len);

        
    }
    return res;
    
}
int main(){
    string x = "abccddd";
    int y = 2;

    cout<< norepeat(x,y)<< endl;

}