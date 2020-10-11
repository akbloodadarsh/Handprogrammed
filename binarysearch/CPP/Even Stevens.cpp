#include "solution.hpp"
using namespace std;

class Solution {
    public:
    vector<int> solve(vector<int>& a) {
        int pos = -1;
        for(int i=0;i<a.size();++i)
        {
            if(!(a[i]&1))
            {
                if(pos==-1)pos=i;
                else
                {
                    swap(a[i],a[pos]);
                    pos = -1;
                }
            }
        }   
        return a;
    }
};
