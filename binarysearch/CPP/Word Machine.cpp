    int conv(string &s)
    {
        int dig = 1,sum = 0;
        for(int i = s.size()-1;i>=0;--i)
        {
            sum+=(s[i]-'0')*dig;
            dig*=10;
        }
        return sum;
    }
    int solve(vector<string>& ops) {
        stack<int>st;
        for(int i=0;i<ops.size();++i)
        {
            if(ops[i][0]=='P')
            {
                if(st.empty())return -1;
                st.pop();
            }
            else if(ops[i][0]=='D')
            {
                if(st.empty())return -1;
                st.push(st.top());
            }
            else if(ops[i][0]=='+' || ops[i][0]=='-')
            {
                int sum = 0;
                if(st.empty())return -1;
                sum+=st.top();
                st.pop();
                if(st.empty())return -1;
                sum+=(ops[i][0]=='-'?-1*st.top():st.top());
                st.pop();
                st.push(sum);
            }
            else st.push(conv(ops[i]));
        }
        return st.empty()?-1:st.top();
    }
