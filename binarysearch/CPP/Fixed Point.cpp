#include "solution.hpp"
using namespace std;

class Solution {
    public:
    int solve(vector<int>& nums) {
        if(!nums.size())return -1;
        int high = nums.size()-1,low = 0,minn = INT_MAX;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(mid==nums[mid])
            {
                minn = min(minn,mid);
                high = mid-1;
            }
            else if(nums[mid]<mid)low = mid+1;
            else high = mid-1;
        }
        return minn==INT_MAX?-1:minn;
    }
};
