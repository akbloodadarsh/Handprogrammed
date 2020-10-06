    int solve(string s) {
        bool a[26] = {0};
        for(int i = 0;i<s.size();++i)
        {
            if(a[s[i]-'a'])return i;
            a[s[i]-'a'] = 1;
        }
        return -1;
    }
