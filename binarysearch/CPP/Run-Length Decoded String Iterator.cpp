#include "solution.hpp"
using namespace std;

class RunLengthDecodedIterator {
    public:
    string ans;
    int i=0;
    int conv(string &s,int &n)
    {
        int sum = 0;
        while(n<s.size() && s[n]>='0' && s[n]<='9'){
            sum*=10;
            sum+=s[n++]-'0';
        }
        return sum;
    }
    RunLengthDecodedIterator(string s) {
        ans = "";
        i=0;
        int j = 0;
        while(j<s.size())
        {
            int count = conv(s,j);
            ans+=string(count,s[j++]);
        }
    }

    string next() {
        return string(1,ans[i++]);
    }

    bool hasnext() {
        return i<ans.size();
    }
};
