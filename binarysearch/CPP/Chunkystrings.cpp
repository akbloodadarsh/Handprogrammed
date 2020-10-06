    vector<string> solve(string s, int n) {
        int i=0;
        vector<string>v;
        while(i<s.size())
        {
            string tmp;int count = n;
            while(i<s.size() && count--)tmp+=s[i++];
            v.push_back(tmp);
        }
        return v;
    }
