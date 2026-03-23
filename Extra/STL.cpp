#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> vec={1,2,3,4,5};
    

    for (auto it=vec.rbegin();it!=vec.rend();it++)
    {
        cout<<*(it);
    }
    
    return 0;
}