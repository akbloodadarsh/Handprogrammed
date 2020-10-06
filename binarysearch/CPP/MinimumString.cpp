    int solve(string s, string t) {
        int a[26] = {0};
        for(char i:t)++a[i-'a'];
        for(char i:s)--a[i-'a'];
        int count = 0;
        for(int i=0;i<26;++i)if(a[i]>0)count+=a[i];
        return count;
    }
