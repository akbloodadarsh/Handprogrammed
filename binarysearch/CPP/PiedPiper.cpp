    int solve(vector<string>& words) {
        int maxx = 0,count = 0;
        char prev = 'a';
        for(int i=0;i<words.size();++i)
        {
            if(words[i][0]==prev)++count;
            else
            {
                count = 1;
                prev = words[i][0];
            }
            maxx = (maxx<count?count:maxx);
        }
        return maxx;
    }
