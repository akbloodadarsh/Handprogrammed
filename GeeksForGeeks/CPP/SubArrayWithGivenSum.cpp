#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    unordered_map<int,int>m;
	    int sum = 0,n,k;
	    cin>>n>>k;
	    int a[n];
	    bool sett = 0;
	    for(int i=0;i<n;++i)
	    {
	        cin>>a[i];
	        sum+=a[i];
	        m[sum] = i;
	        if(!sett && m.find(sum-k)!=m.end())
	        {
	            cout<<i-m[sum-k]-1<<" "<<i<<"\n";
	            sett = 1;
	        }
	    }
	}
	return 0;
}
