#include<iostream>
using namespace std;
#include<vector>

/* Array is sorted 
remove duplicate
in order no space 
*/

int removeDuplicate(vector<int>& nums) {
    int n = nums.size();
    int i = 0, j = 1; 
    int unique = 1;
    while (j<n)
    {
        if(nums[i] == nums[j]){
            j++;
        }
        else{
            i++;
            nums[i] = nums[j];
            j++;
            unique++;
        }
    }
    return unique;
}


int main(){
    vector<int> num={0,0,0,1,1,1,2,2,3,3,4};
    int ans = removeDuplicate(num);

    for (int i = 0; i < ans; i++) {
        cout << num[i] << " ";
    }
    cout << "\nUnique elements: " << ans << endl;

    return 0;
}