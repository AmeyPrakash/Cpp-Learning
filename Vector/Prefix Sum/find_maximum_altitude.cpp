#include<iostream>
#include<vector>

using namespace std;

class Solution_1 {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> alt(n + 1);

        alt[0] = 0;
        int altitude = 0;
        int curr_altitude = 0;
        for(int i = 0;i < n; i++){
            curr_altitude = altitude;
            altitude += gain[i];
            alt[i+1] = altitude;
            
        }
        int max = alt[0];
        for(auto maxi: alt){
            if(maxi > max){
                max = maxi;
            }
        }
        return max;
    }
};

class Solution_2 {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int max_altitude = 0;
        for(auto alt: gain){
            altitude += alt;
            max_altitude = max(altitude, max_altitude);
        }
        return max_altitude;

    }
};
