#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>
using namespace std;

vector<int> findmissingandrepeated(vector<vector<int>>& grid){
    vector<int>ans;
    unordered_set<int> s;
    int a=-1,b=-1; //a is repeated no and b is missing no.
    int expsum =0,actualsum=0;

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid.size(); j++)
        {   
            actualsum+= grid[i][j];

            if (s.find(grid[i][j])!=s.end())
            {
                a=grid[i][j];
                
                
            }
            s.insert(grid[i][j]);
            
        }
        
    }
    expsum=(grid.size()*grid.size())*(grid.size()*grid.size()+1)/2;//element sum=(n*n)*(n*n+1)/2
    b=expsum+a-actualsum;
    
    return {a,b};
    
       
}

int main(){
    vector<vector<int>> grid=[[9,1,7],[8,9,2],[3,4,6]];


    return 0;
}