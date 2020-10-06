    int solve(int n) {
        string s =to_string(n);
        vector<string>v;
        for(int i=0;i<s.size();++i)
        {
            char tmp= s[i];
            s[i] = '3';
            v.push_back(s);
            s[i] = tmp;
        }
        sort(v.begin(),v.end());
        return stoi(v[v.size()-1]);
    }
