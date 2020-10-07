#include "solution.hpp"
using namespace std;

class Solution {
    public:
    int counter(int n,int empty)
    {
        if(n+empty<3)return n;
        if(n<3)return n+counter((n+empty)/3,(n+empty)%3);
        return n+counter(n/3,empty+n%3);
    }
    int solve(int n) {
        return counter(n,0);
    }
};
