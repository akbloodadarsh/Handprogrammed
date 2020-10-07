// Time:- O(N)
// Space:- O(1) (No extra space for return vector)

// Firstly, It is very intuitive to come up with using O(N) space to store the information.
// e.g. [ 4, 3, 2, 7, 8, 2, 3, 1] we can use a binary array (O(N) space) to count it. [ 1, 1, 1, 1, 0, 0, 1, 1]
// Note that it has the same amount of information with [ -, -, -, -, +, +, -, -] . You can just attach this information to the original array without generating a new array. That's the whole point.

#include "solution.hpp"
using namespace std;

class Solution {
    public:
    vector<int> solve(vector<int>& nums) {
        for(int val:nums)
        {
            int idx = abs(val)-1;
            nums[idx] = nums[idx]<0?nums[idx]:-nums[idx];
        }
        int count = 0;
        for(int i=0;i<nums.size();++i)if(nums[i]>0)nums[count++] = i+1;
        nums.resize(count);
        return nums;
    }
};
