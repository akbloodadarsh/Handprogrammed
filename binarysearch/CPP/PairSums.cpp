    int solve(vector<int>& nums) {
        int odd = 0,even = 0;
        for(int i:nums)if(i&1)++odd;else ++even;
        return even*odd;
    }
