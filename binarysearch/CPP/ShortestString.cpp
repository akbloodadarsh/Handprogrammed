    int solve(string s) {
        int count = 0;
        for(char i:s)count+=(i=='0'?-1:1);
        return abs(count);
    }
