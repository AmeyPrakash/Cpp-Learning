#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>



bool comparator(pair<int,int> p1,pair<int,int> p2);
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
    

    /*
    SET
    
    data stored is unique and duplicate values are ignored
    */
    // set<int>s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);    //O(log n)

    // //lower bound function value passed 4 it will return 4 if found other wise it will return  just greater value
    // cout<<*(s.lower_bound(4))<<endl;

    // //Upper bound 
    // // value is greater than the given key will never be equal to the key given.
    // cout<<*(s.upper_bound(4));

    // //MULTI SET 
    // multiset<int>s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(1);
    // s.insert(5);  
    // //UNORDERED SET O(1)  rare O(n)
    // unordered_set<int>s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(1);
    // s.insert(5);

    //ALGORITHMS
    
    
    // int arr [5]={1,8,6,4,5};
    // sort(arr, arr + 5);
    // for(int val: arr){
    //     cout<<val<<" ";
    // }
    //DESCENDING 
    //sort(arr,arr+n,greater<int>());

    //Pair 1st value sort
    // vector<pair<int,int>>vec={{3,1},{2,1},{7,6}};
    // sort(vec.begin(),vec.end());
    // for(auto val: vec){
    //     cout<<val.first<<" "<<val.second<<endl;
    // }
    //second value sort
    /*
    custom coparator
    bool return*/
    
//     vector<pair<int,int>>vec={{3,1},{2,1},{7,6}};
//     sort(vec.begin(),vec.end(), comparator);
//     for(auto val: vec){
//         cout<<val.first<<" "<<val.second<<endl;
//     }



//     return 0;
// }
// bool comparator(pair<int,int> p1,pair<int,int> p2){
//     if(p1.second<p2.second) return true;
//     if(p1.second>p2.second) return false;
//     if(p1.first<p2.first) return true;
//     else return false;
// }
        
    // vector<int> vec ={1,2,3,4,5};
    // reverse(vec.begin()+1,vec.begin()+3);
    // for(auto val: vec){
    //     cout<<val<<endl;
    // }
    
    // string s ="abc";
    // prev_permutation(s.begin(),s.end());
    // cout<<s<<endl;

    // cout<<max(4,5)<<min(3,8);
    //swap();

    // vector<int> vec ={1,2,3,4,5};
    // cout<<*(max_element(vec.begin(),vec.end()))<<endl;
    // cout<<*(min_element(vec.begin(),vec.end()))<<endl;
    // cout<<binary_search(vec.begin(),vec.end(),4);

    // for(auto val: vec){
    //     cout<<val<<endl;
    // }



    return 0;
}
