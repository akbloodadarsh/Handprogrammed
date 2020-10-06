    vector<string> solve(int n) {
        vector<string>v;
        for(int i=1;i<=n;++i)
        {
            string s = to_string(i);
            if(i%3==0)v.push_back("clap");
            else
            {
                bool ins = 0;
                for(int j=0;j<s.size();++j)
                {
                    if(s[j]=='3' || s[j]=='6' || s[j]=='9')
                    {
                        ins = 1;
                        break;
                    }
                }
                v.push_back((ins?"clap":s));
            }
        }
        return v;
    }
