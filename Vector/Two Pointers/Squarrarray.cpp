#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// vector<int> square(vector<int>& nums){

//     int N = nums.size();

//     vector<int> negative, positive, answer;

    
//     for (int i = 0; i < N; i++)                    //Separating the negative and positive numbers into two different arrays
//     {
//         if(nums[i] < 0){
//             negative.push_back(nums[i]); //negative

//         }
//         else{
//             positive.push_back(nums[i]); //positive
//         }
//     }


//     int n = negative.size(),m = positive.size();
//     int i = 0, j = 0, index = 0;
    

//     if (0 == n)
//     {
//         for (int i = 0; i < m; i++)
//         {
//             answer.push_back(positive[i]*positive[i]);    //CASE I: if there are no neagitive no.
//         }
//         return answer;
        
//     }
//     else if (0 == m)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             answer.push_back(negative[i]*negative[i]);     //CASE II: if there are no positive no.
           
//         }
//         reverse(answer.begin(),answer.end());
//         return answer;
        
//     }
//     else {                                                   //CASE III: if there are both negative and positive no.
//         reverse(negative.begin(),negative.end());
//         for (int i = 0; i < n; i++)
//         {
//             negative[i] *= negative[i];
//         }
        
//         for (int j = 0; j < m; j++)
//         {
//             positive[j] *= positive[j];
//         }
//         while (i < n && j < m)
//         {
//             if (negative[i]<=positive[j])
//             {
//                 answer.push_back(negative[i]);
//                 index++;
//                 i++;
                
//             }
//             else{
//                 answer.push_back(positive[j]);
//                 index++;
//                 j++;
//             }
            
            
            
//         }
//         while (i < n)                   //if there are some negative no. left in the negative array
//         {
//             answer.push_back(negative[i]);
//                 index++;
//                 i++;
//         }
//         while (j < m)                  //if there are some positive no. left in the positive array
//         {
//             answer.push_back(positive[j]);
//                 index++;
//                 j++;
//         }
//         return answer;   
//     }
//     return answer;  
// }


//BEST
/*We know that the greatest square will be at the extreme ends of the array 
So, what we can do is we will move two pointers from both ends and compare the values and place the greater one at the end */
vector<int> square(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);
    
    int left = 0;
    int right = n - 1;
    int pos = n - 1;
        
    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];
            
        if (leftSquare > rightSquare) {
            result[pos] = leftSquare;
            left++;
        } else {
            result[pos] = rightSquare;
            right--;
        }
        pos--;
    }
        
    return result;
}



int main(){
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> ans = square(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
