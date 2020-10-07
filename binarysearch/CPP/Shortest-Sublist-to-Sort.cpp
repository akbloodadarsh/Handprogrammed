    Time :- O(N log(N))
    Space :- O(N)
    int solve(vector<int>& nums) {
        vector<int>a;
        a= nums;
        int beg = 0,end = 0;
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();++i)
        {
            if(a[i]!=nums[i])
            {
                if(!beg)beg = i+1;
                else end = i+1;
            }
        }
        if(!end)return 0;
        return end-beg+1;
    }
