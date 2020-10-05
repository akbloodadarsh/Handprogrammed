#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	   priority_queue<int,vector<int>,greater<int>>q;
	   vector<int>v;
	   for(int i=0;i<n;++i)
	   {
	       if(q.empty())q.push(arr[i]);
	       else if(q.size()==k && q.top()<arr[i])
	       {
	           q.pop();
	           q.push(arr[i]);
	       }
	       else if(q.size()<k)q.push(arr[i]);
	   }
	   while(!q.empty())
	   {
	       v.push_back(q.top());
	       q.pop();
	   }
	   reverse(v.begin(),v.end());
	   return v;
	}

};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
