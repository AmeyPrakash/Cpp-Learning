#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<deque>

int main(){

    //VECTOR ITERATORS
    // vector<int> vec={1,2,3,4,5};
    

    // for (auto it=vec.rbegin();it!=vec.rend();it++)
    // {
    //     cout<<*(it);
    // }
    // LIST
    // list<int> l;
    // l.emplace_back(1);
    // l.push_back(2);
    // l.push_front(3);
    // l.push_front(4);
    // l.pop_back();
    // l.pop_front();
    // for (int i : l){
    //     cout<< i <<endl;

    // }
    // cout<<endl;


    //DEQUE
    

    // deque<int> d={1,2,3};

    // for (int i : d){
    //     cout<< i <<endl;
    // }
    // cout<<d[1];  //random access available while in list its not possible


    //PAIR 
    //value 1 and value 2 types may differ but we can pair them and name pair anything.
    //pair of pair can also be created.

    // pair<int,pair<char,int>> p = {3,{'A',5}}; 
    // cout<<p.first<<endl; //3
    // cout<<p.second.first<<endl;//A
    // cout<<p.second.second<<endl; //1

    // vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};

    // vec.push_back({4,5}); //insert
    // vec.emplace_back(4,5);//in place object will be created

    // for (auto i : vec)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    

    
    return 0;
}