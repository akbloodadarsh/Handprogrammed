    vector<int> solve(int n) {
        vector<bool>a(n+1,1);
        for(int p=2;p*p<=n;++p)
        {
            if(a[p])
            {
                for(int i=p*p;i<=n;i+=p)a[i] = 0;
            }
        }
        vector<int>v;
        for(int i=2;i<=n;++i)if(a[i])v.push_back(i);
        return v;
    }
