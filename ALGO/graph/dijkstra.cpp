const int N = 1e5 + 10;
const int INF = 1e9 + 10;

  //          node, wt
vector<pair<int, int>> adj[N];

  void Dijkstra(int source, int n) {

    vector<int> vis(n + 1, 0);
    vector<int> dis(n + 1, INF);

    //       wt,node
    set<pair<int, int>> st;

    st.insert({0, source});
    dis[source] = 0;
    while (st.size() > 0) {
      auto node = *st.begin();
      int v = node.second;
      int dist = node.first;
      st.erase(st.begin());
      if (vis[v])
        continue;
      vis[v] = 1;
      for (auto child : adj[v]) {
        int child_v = child.first;
        int wt = child.second;
        if (dis[v] + wt < dis[child_v]) {
          dis[child_v] = dis[v] + wt;
          st.insert({dis[child_v], child_v});
        }
      }
    }
  }
