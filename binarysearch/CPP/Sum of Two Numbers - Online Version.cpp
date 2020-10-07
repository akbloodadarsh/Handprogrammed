#include "solution.hpp"
using namespace std;

class TwoSum {
    public:
    
        unordered_map<int,int>m;
    TwoSum() {
        m.clear();
    }

    void add(int val) {
        ++m[val];
    }

    bool find(int val) {
        for(auto [first,second]:m)
        {
            if(m.find(val-first)!=m.end())
            {
                if(first==val-first && second>1)return 1;
                else if(first!=val-first)return 1;
            }
        }
        return 0;
    }
};
