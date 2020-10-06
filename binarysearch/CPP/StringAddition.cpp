    string solve(string s1, string s2) {
        string s;
        int i = s1.size()-1,j = s2.size()-1,carry = 0;
        while(i>=0 && j>=0)
        {
            int sum = s1[i--]-'0'+s2[j--]-'0'+carry;
            if(sum>=10)
            {
                carry = 1;
                s+=to_string(sum%10);
            }
            else
            {
                carry = 0;
                s+=to_string(sum);
            }
        }
        while(i>=0)
        {
            int sum = s1[i--]-'0'+carry;
            if(sum>=10)
            {
                carry = 1;
                s+=to_string(sum%10);
            }
            else
            {
                carry = 0;
                s+=to_string(sum);
            }
        }
        while(j>=0)
        {
            int sum = s2[j--]-'0'+carry;
            if(sum>=10)
            {
                carry = 1;
                s+=to_string(sum%10);
            }
            else
            {
                carry = 0;
                s+=to_string(sum);
            }
        }
        if(carry)s+='1';
        reverse(s.begin(),s.end());
        return s;
    } 
