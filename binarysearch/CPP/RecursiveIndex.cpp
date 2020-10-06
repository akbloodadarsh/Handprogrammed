    int solve(vector<int>& nums, int k) {
        int count = 0;
        vector<bool>sett(nums.size(),0);
        while(k<nums.size())
        {
            if(sett[k])return -1;
            sett[k] = 1;
            k = nums[k];
            ++count;
        }
        return count;
    }
