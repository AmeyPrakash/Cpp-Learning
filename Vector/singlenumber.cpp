#include<iostream>
using namespace std;
#include<vector>
 
int main(){
    vector<int> vec={4,1,2,1,2,};     //n^n=0
                                      //n^0=n
    int ans=0;
    for(int i: vec)
    {
        ans ^= i;
    }
    cout << ans << endl;
    


    return 0;
}