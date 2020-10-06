    int solve(vector<int>& nums) {
        unordered_set<int>sett;
        for(int i:nums)sett.insert(i);
        int count = 0;
        for(int i=0;i<nums.size();++i)if(sett.find(nums[i]+1)!=sett.end())++count;
        return count;
    }
