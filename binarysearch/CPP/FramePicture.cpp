    string solve(vector<string>& words) {
        int maxx = 0;
        string s;
        for(string w:words)maxx = max(maxx,(int)w.size());
        for(int i=0;i<maxx+4;++i)s+='*';
        s+='\n';
        for(int i=0;i<words.size();++i)
        {
            s+="* "+words[i];
            for(int j=0;j<maxx-words[i].size();++j)s+=' ';
            s+=" *\n";
        }
        for(int i=0;i<maxx+4;++i)s+='*';
        return s;
    }
