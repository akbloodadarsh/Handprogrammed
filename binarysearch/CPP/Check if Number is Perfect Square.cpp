#include "solution.hpp"
using namespace std;
#define ull unsigned long long
class Solution {
    public:
    bool solve(int n) {
        ull low = 0,high = n;
        while(low<=high)
        {
            ull mid = low+(high-low)/2;
            if(mid*mid==(ull)n)return 1;
            else if(mid*mid<n)low = mid+1;
            else high = mid-1;
        }
        return 0;
    }
};
