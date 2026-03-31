#include<iostream>
#include<vector>
using namespace std;

vector<int> twosum(vector<int>& numbers,int target){
    int i = 0, j = numbers.size() - 1;

    while (i < j)
    {
        int sum = numbers[i] + numbers[j];

        if (sum > target)
            j--;
        else if (sum < target)
            i++;
        else
            return {i+1, j+1};
    }

    return {};
}

int main(){

    return 0;
}