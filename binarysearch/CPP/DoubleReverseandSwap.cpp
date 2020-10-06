string solve(int n) {
        string s = "xxy";
        while(n)
        {
            s+=s;
            --n;
            if(!n)return s;
            reverse(s.begin(),s.end());
            --n;
            if(!n)return s;
            for(int i=0;i<s.size();++i)s[i] = (s[i]=='x'?'y':'x');
            --n;
        }
        return s;
    }
