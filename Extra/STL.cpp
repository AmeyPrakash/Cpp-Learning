#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>

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
    


    //STACK   

    //LIFO  (LAST IN FIRst out)
    //elements will be added at top and removed from top




    // stack<int> s1;
    // s1.push(1);
    // s1.push(2);
    // s1.push(3);

    // stack<int> s2;
    // s2.swap(s1);
    // cout<<s1.size()<<endl;
    // cout<<s2.size()<<endl;


    
   // cout<<s1.top()<<endl;
    // while (!s1.empty())
    // {
    //     cout<<s1.top()<<endl;
    //     s1.pop();
        
    // }



    /*QUEUE

    FIRST IN FIRST OUT
    

    */
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // while (!q.empty())
    // {
    //     cout<<q.front()<<endl;
    //     q.pop();
    // }
    
/*PRIORITY QUEUE
internally its a tree structure
By default higher will have highest priority

its a tree in which the minimum element is at the top
*/

    // priority_queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // while (!q.empty())
    // {
    //     cout<<q.top()<<endl;
    //     q.pop();
    // }
    
    // priority_queue<int,vector<int>,greater<int>> q;

    // q.push(1);   //O(log n)
    // q.push(2);
    // q.push(3);
    // while (!q.empty())
    // {
    //     cout<<q.top()<<endl;
    //     q.pop();  //O(log n)
    // }    
    /*




    MAPS O(log n)
    m[key]=value
    key will be unique while value can be duplicate
    

    */
//    map<string, int> m;
//    m["tv"]=100;
//    m["laptop"]=100;
//    m["headphones"]=50;
//    m["tablet"]=120;    //sorts the data in ascending order in alphabatical order
//    m["watch"]=50;
//    m.emplace("camera",25);
//    m.erase("tv");

//    if(m.find("tablet") != m.end()){
//     cout<<"found\n";
//    }
//    else{
//     cout<<"not found\n";
//    }

//    for (auto i:m)
//    {
//     cout<<i.first<<" "<<i.second<<endl;

//    }
//    cout<<"count = "<<m["laptop"]<<endl;
   
//     //MULTI MAP
//     multimap<string, int> m;
//     m.emplace("camera",25);
//     m.emplace("camera",25);
//     m.emplace("camera",25);
//     m.emplace("camera",25);
//     m.erase(m.find("camera")); 

//UNORDERED MAP
    // unordered_map<string, int> m;
    

    return 0;
}