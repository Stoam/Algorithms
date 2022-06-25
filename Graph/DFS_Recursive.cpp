#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back

vector<vi> adj;
vector<bool> vis;

void DFS(int u)
{
  vis[u] = 1;
  
  for(auto v : adj[u]){
    if(!vis[v])
      DFS(v);
  }
}

int main()
{
  int n, m, x;
  cin >> n >> m;
  
  adj.assign(n, vi());
  vis.assign(n, 0);
  
  while(m--){
    int u, v;
    cin >> u >> v;
    
    adj[u].pb(v);
    adj[v].pb(u);
  }
  cin >> x;
  DFS(x);
  return 0;
}
