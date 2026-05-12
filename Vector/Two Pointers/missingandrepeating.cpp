#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>
using namespace std;

//    HASHING

// vector<int> findmissingandrepeated(vector<vector<int>>& grid){
//     vector<int>ans;
//     unordered_set<int> s;
//     int a=-1,b=-1; //a is repeated no and b is missing no.
//     int expsum =0,actualsum=0;

//     for (int i = 0; i < grid.size(); i++)
//     {
//         for (int j = 0; j < grid.size(); j++)
//         {   
//             actualsum+= grid[i][j];

//             if (s.find(grid[i][j])!=s.end())
//             {
//                 a=grid[i][j];
                
                
//             }
//             s.insert(grid[i][j]);
            
//         }
        
//     }
//     expsum=(grid.size()*grid.size())*(grid.size()*grid.size()+1)/2;//element sum=(n*n)*(n*n+1)/2
//     b=expsum+a-actualsum;
    
//     return {a,b};
    
       
// }




//      USING MATH 
//      Applying  Sum and square Sum 
//      ANd then finding value of missing and repeated
//      Here we are doing this to optimize the space from O(n^2) to O(1)

vector<int> findmissingandrepeated(vector<vector<int>>& grid){
    int n = grid.size();
    int N = n*n;

    long long S = (long long) N*(N+1)/2;
    long long S2 = (long long) N*(N+1)*(2*N+1)/6;
    long long A = 0,A2=0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            A += grid[i][j];                          // Sum
            A2 += (long long) grid[i][j]*grid[i][j];  // Square Sum
        }
    }
    long long x = S-A;
    long long y=(S2-A2)/x;
    int missing = (x+y)/2;
    int repeated = y-missing;

    return{missing,repeated};



}

int main() {
    vector<vector<int>> grid={{9,1,7},{8,9,2},{3,4,6}};
    vector<int> y = findmissingandrepeated(grid);
    for(auto i : y)
    {
        cout<<i<<endl;
    }
    
    return 0;
}