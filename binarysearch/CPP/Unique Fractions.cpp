#include "solution.hpp"
using namespace std;

class Solution {
    public:
    vector<vector<int>> solve(vector<vector<int>>& fractions) {
        unordered_map<double,pair<int,int>>m;
        vector<double>v;
        for(int i=0;i<fractions.size();++i)
        {
            int div = INT_MAX;
            while(1)
            {
                div = __gcd(fractions[i][0],fractions[i][1]);
                if(fractions[i][0]<0 || fractions[i][1]<0)
                {
                    fractions[i][0]=-abs(fractions[i][0]);
                    fractions[i][1]  = abs(fractions[i][1]);    
                }
                if(abs(div)==1)break;
                fractions[i][0]/=div;
                fractions[i][1] /=div; 
            }
            double val = (double)fractions[i][0]/(double)fractions[i][1];
            m[val] = {fractions[i][0],fractions[i][1]};
        }
        for(auto [a,b]:m)v.emplace_back(a);
        sort(v.begin(),v.end());
        vector<vector<int>>ans(m.size(),vector<int>(2));
        for(int i=0;i<v.size();++i)
        {
            ans[i][0] = m[v[i]].first;
            ans[i][1] = m[v[i]].second;
        }
        return ans;
    }
};
