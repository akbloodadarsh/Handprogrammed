//n no of vertices
// v vertices name
// e no of edges

// ***************For directed graph***************

bool cycle(unordered_map<int,vector<int>>&g,int v,unordered_set<int>&visit)
{
    if(visit.find(v)!=visit.end())return 1;
    visit.insert(v);
    for(int i=0;i<g[v].size();++i)
    {
        if(cycle(g,g[v][i],visit))return 1;
    }
    visit.erase(visit.find(v));
    return 0;
}
bool isCyclic(int n)
{
    unordered_map<int,vector<int>>g;
    vector<int>vertices;
    for(int i=0;i<n;++i)
    {
        int v,e;
        cin>>v>>e;
        vertices.emplace_back(v);
        while(e--)
        {
            int tmp;
            cin>>tmp;
            g[v].push_back(tmp);
        }
    }
    unordered_set<int>visit;
    for(int i:vertices)
    {
        if(cycle(g,i,visit))return 1;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<isCyclic(n);
	return 0;
}

// **************undirected graph *********************
bool cycle(unordered_map<int,vector<int>>&g,int v,unordered_set<int>&visit,int prev)
{
    if(visit.find(v)!=visit.end())return 1;
    visit.insert(v);
    for(int i=0;i<g[v].size();++i)
    {
        if(prev!=g[v][i] && cycle(g,g[v][i],visit,v))return 1;
    }
    visit.erase(visit.find(v));
    return 0;
}
bool isCyclic(int n)
{
    unordered_map<int,vector<int>>g;
    vector<int>vertices;
    while(n--)
    {
        int v,e;
        cin>>v>>e;
        vertices.emplace_back(v);
        while(e--)
        {
            int tmp;
            cin>>tmp;
            g[v].push_back(tmp);
            g[tmp].push_back(v);
        }
    }
    unordered_set<int>visit;
    for(int &i:vertices)
    {
        if(cycle(g,i,visit,-1))return 1;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<isCyclic(n);
	return 0;
}
