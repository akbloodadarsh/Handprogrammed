    int solve(vector<int>& nums, int k) {
        int sum = 0,i=0,inx = -1;
        for(;i<nums.size();++i)
        {
            if(sum+nums[i]<=k)inx = i;
            sum+=nums[i];
        }
        return inx;
    }
