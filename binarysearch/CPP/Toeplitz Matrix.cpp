#include "solution.hpp"
using namespace std;

class Solution {
    public:
    bool solve(vector<vector<int>>& matrix) {
        int n = matrix.size(),m = matrix[0].size();
        for(int i=0;i<m;++i)
        {
            int val = matrix[0][i];
            for(int k = 1;k<m;++k)if(i+k<m && matrix[k][i+k]!=val)return 0;
        }
        for(int i=0;i<;++i)
        {
            int val = matrix[i][0];
            for(int k = 1;k<n;++k)if(i+k<n && matrix[i+k][k]!=val)return 0;
        }
        return 1;
    }
};
