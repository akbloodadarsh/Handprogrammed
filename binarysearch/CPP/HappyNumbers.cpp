    bool check(int n,unordered_set<int>&sett)
    {
        if(n==1)return 1;
        if(sett.find(n)!=sett.end())return 0;
        sett.insert(n);
        int sum = 0;
        while(n)
        {
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return check(sum,sett);
    }
    bool solve(int n) {
        unordered_set<int>sett;
        return check(n,sett);
    }
