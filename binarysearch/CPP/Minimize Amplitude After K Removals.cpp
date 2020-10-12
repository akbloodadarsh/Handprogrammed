#include "solution.hpp"
using namespace std;

class Solution {
    public:
    int solve(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int i = 0,j = a.size()-k-1;
        int diff = INT_MAX;
        while(j<a.size())diff = min(diff,abs(a[i++]-a[j++])); 
        return diff;
    }
};
