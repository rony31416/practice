#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int parent[N];
int Size[N];

void make(int v)
{
    parent[v] = v;
    Size[v] = 1;
}
int Find(int v)
{
    if(v == parent[v] ) return v;
    return parent[v] = Find(parent[v]);
}
void Union(int a,int b)
{
    a = Find(a);
    b = Find(b);
    if(a != b)
    {
        if(Size[a] < Size[b]) swap(a,b);
        parent[b] = a;
        Size[a] += Size[b];
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>> edges;
    for(int i = 1 ; i <=m ; i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({wt,{u,v}});
        edges.push_back({wt,{v,u}});
    }
    sort(edges.begin(),edges.end());

    for(auto &u : edges)
    {
        int i = u.second.first;
        int j = u.second.second;
        make(i);
        make(j);
    }

    int total_cost = 0;

    for(auto &edge : edges)
    {
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if(Find(u) == Find(v) ) continue;
        Union(u,v);
        total_cost += wt;
        cout<<u<<" "<<v<<"\n";
    }
    cout<<total_cost<<"\n";

}
/*
6 9
5 4 9
1 4 1
5 1 4
4 3 5
4 2 3
1 2 2
3 2 3
3 6 8
2 6 7



 6 7
0 1 5
0 2 10
0 3 100
1 3 50
1 4 200
3 4 250
4 5 50
*/


