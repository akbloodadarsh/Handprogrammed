    int solve(vector<int>& nums) {
        vector<int>m,n;
        sort(nums.begin(),nums.end());
        for(int i:nums)if(i<0)m.emplace_back(i);else n.emplace_back(i);
        int maxx=nums[0];
        if(n.size()>1)maxx = max(maxx,n[n.size()-1]*n[n.size()-2]);
        if(m.size()>1)maxx = max(maxx,m[0]*m[1]);
        return maxx;
    }
