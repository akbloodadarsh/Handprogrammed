#include "solution.hpp"
using namespace std;

class Solution {
    public:
    int solve(string s, int k) {
        int n = s.size(),count = 0;
        unordered_map<string,int>m;
        for(int i=0;i+k<=n;++i)++m[s.substr(i,k)];
        for(auto [first,second]:m)count+=(second>1?1:0);
        return count;
    }
};
