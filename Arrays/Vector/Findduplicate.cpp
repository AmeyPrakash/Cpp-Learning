#include<iostream>
#include<vector>
using namespace std;
#include<unordered_set>

// HASHING  

int duplicate(vector<int>& nums){
    unordered_set<int> s;
    for(int val: nums){
        if(s.find(val)!=s.end()){
            return val;

        }
        s.insert(val);
    }
    return -1;

}


// Slow fast Pointer approach (Linked list)
//two node will point to one
int duplicate(vector<int>& nums){
    int slow = nums[0],fast=nums[0];
    do{
        slow=nums[slow];//+1
        fast=nums[nums[fast]]; //+2
    }while(slow!=fast);

    slow=nums[0];

    while (slow!=fast)
    {
        slow = nums[slow];//+1
        fast = nums[fast];//+1
    }
    return slow;
}

int main(){
    vector<int> y = {3,1,3,4,2};
    cout<< duplicate(y) <<endl;
   
    

    return 0;
}