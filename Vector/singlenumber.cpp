#include<iostream>
using namespace std;
#include<vector>
 
int main(){
    vector<int> vec={4,1,2,1,2,};
    int ans=0;
    for(int i: vec)
    {
        ans ^= i;
    }
    cout << ans << endl;
    


    return 0;
}