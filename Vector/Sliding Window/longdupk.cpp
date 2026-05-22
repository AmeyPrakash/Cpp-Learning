#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:

    int longestSubstring(string s, int k) 
    {
        int ans = 0;

        for (int targetUnique = 1; targetUnique <= 26; targetUnique++) 
        {
            vector<int> freq(26, 0);

            int left = 0;
            int right = 0;

            int unique = 0;
            int countAtLeastK = 0;

            while (right < s.size()) 
            {
                // expanding window

                if (freq[s[right] - 'a'] == 0) 
                {
                    unique++;
                }

                freq[s[right] - 'a']++;

                if (freq[s[right] - 'a'] == k) 
                {
                    countAtLeastK++;
                }

                // shrink window if unique greater

                while (unique > targetUnique) 
                {
                    if (freq[s[left] - 'a'] == k) 
                    {
                        countAtLeastK--;
                    }

                    freq[s[left] - 'a']--;

                    if (freq[s[left] - 'a'] == 0) 
                    {
                        unique--;
                    }

                    left++;
                }

                // valid

                if (unique == countAtLeastK) 
                {
                    ans = max(ans, right - left + 1);
                }

                right++;
            }
        }

        return ans;
    }
};