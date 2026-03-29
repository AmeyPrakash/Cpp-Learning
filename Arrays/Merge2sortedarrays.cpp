#include<iostream>
using namespace std;
#include<vector>

void merge2sortedarrays(vector<int>& nums1, int m,vector<int>& nums2, int n) {
    int idx=m+n-1,i=m-1,j=n-1;
    
    while (i>=0 && j>=0){
        if(nums1[i]>=nums2[j]){
            nums1[idx--]=nums1[i--];

        }
        else{
            nums1[idx--]=nums2[j--];
        }
    }
    while (j>=0) //if i < 0;
    {
        nums1[idx--]=nums2[j--];
    }
    
    

}

int main() {
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};
    int m=3,n=3;
    merge2sortedarrays(nums1,m,nums2,n);
    for (int i = 0; i < nums1.size(); i++)
    {
        cout<<nums1[i]<<" ";
    }

    return 0;
}