#include "solution.hpp"
using namespace std;

class Solution {
    public:
    bool solve(string s, string p) {
        unordered_map<string,char>sc;
        unordered_map<char, string>cs;
        int  i= 0,j = 0;
        while(i<s.size())
        {
            string t;
            while(i<s.size() && s[i]!=' ')t+=s[i++];
            ++i;
            if(j==p.size())return 0;
            if(sc.find(t)==sc.end() && cs.find(p[j])==cs.end())
            {
                sc[t] = p[j];
                cs[p[j++]] = t;
            }
            else if(sc.find(t)==sc.end() || cs.find(p[j])==cs.end())return 0;
            else if(sc[t]!=p[j++])return 0;
        }
        if(i!=s.size() && j!=p.size())return 0;
        return 1;
    }
};
