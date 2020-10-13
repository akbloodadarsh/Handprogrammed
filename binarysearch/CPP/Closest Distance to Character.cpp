#include "solution.hpp"
using namespace std;

class Solution {
    public:
    vector<int> solve(string s, string c) {
        vector<int>new_pos(s.size(),INT_MAX);
        int left = INT_MAX,right = INT_MAX,n = s.size();
        for(int i=0;i<n;++i)
        {
            if(s[i]==c[0])left = i;
            new_pos[i] = min(new_pos[i],abs(left-i));
        }
        for(int i=n-1;i>=0;--i)
        {
            if(s[i]==c[0])right = i;
            new_pos[i] = min(new_pos[i],abs(right-i));
        }
        return new_pos;
    }
};
