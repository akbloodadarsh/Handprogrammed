string solve(vector<string>& words) {
        string s;
        for(int i=0;i<words.size();++i)
        {
            words[i][0] = toupper(words[i][0]);
            for(int j=1;j<words[i].size();++j)words[i][j] = tolower(words[i][j]);
            s+=words[i];
        }
        s[0] = tolower(s[0]);
        return s;
    }
