/* Vector are same as array but are dynamic in nature i.e. their memory allocation is dynamic  */

/*STL - container*/

#include<iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> vec = {1,5,2,4};

    // cout << vec[0];

    // vector<int> vec(5,8);  // 5 times 8 will be stored
    // cout << vec[0];
    // cout << vec[1];
    // cout << vec[2];
    // cout << vec[3];
    // cout << vec[4];
    // vector<int> vec = {'1','5','2','4'};
    // cout<<"size = " << vec.size()<<endl;

    // for (char i : vec)
    // {
    //     cout << i;
    // }
    vector<int> vec;
    vec.push_back(15); 
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.pop_back();
    cout<<"size = " << vec.size()<<endl;
    cout<<"ele = " << vec.front()<<endl;
    cout<<"ind = " << vec.at(1)<<endl;

    return 0;
}