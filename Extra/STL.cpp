#include<iostream>
using namespace std;
#include<vector>
#include<list>

int main(){

    //VECTOR ITERATORS
    // vector<int> vec={1,2,3,4,5};
    

    // for (auto it=vec.rbegin();it!=vec.rend();it++)
    // {
    //     cout<<*(it);
    // }
    list<int> l;
    l.emplace_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    l.pop_back();
    l.pop_front();
    for (int i : l){
        cout<< i <<endl;

    }
    cout<<endl;

    

    

    
    return 0;
}