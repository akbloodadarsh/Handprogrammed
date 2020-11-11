#include<bits/stdc++.h>
using namespace std;

void shortpath(unordered_map<int,vector<int>>&g,int v,unordered_set<int>&visit,int prev,vector<vector<int>>&minn,vector<vector<int>>&egweight,int sum)
{
    if(visit.find(v)!=visit.end())return;
    visit.insert(v);
    sum+=egweight[prev][v];
    minn[v][prev] = min(minn[v][prev],sum);
    minn[prev][v] = min(minn[prev][v],sum);
    for(int i=0;i<g[v].size();++i)
    {
        if(prev!=g[v][i])shortpath(g,g[v][i],visit,v,minn,egweight,sum);
    }
    visit.erase(visit.find(v));
}
    
int main()
{
    int n,V,src;
    cin>>n>>V>>src;
    unordered_map<int,vector<int>>g;
    vector<vector<int>>minn(V+1,vector<int>(V+1,INT_MAX)),egweight(V+1,vector<int>(V+1));
    while(n--)
    {
        int v,e;
        cin>>v>>e;
        while(e--)
        {
            int eg,we;
            cin>>eg>>we;
            g[v].push_back(eg);
            g[eg].push_back(v);
            egweight[v][eg] = egweight[eg][v] = we;  
        }
    }
    for(int &i:g[src])
    {
        unordered_set<int>visit;
        shortpath(g,i,visit,1,minn,egweight,0);
    }
    for(int i=0;i<=V;++i)
    {
        for(int j=0;j<=V;++j)if(minn[i][j]!=INT_MAX)cout<<i<<' '<<j<<' '<<minn[i][j]<<'\n';
    }
	return 0;
}

//n no of vertices for input
//V no of verices for 2d matrix
// v vertices name
// e no of edges
// we weight of edges
// eg edge conttcted for vertex v
// src from where we will start dijkstra
