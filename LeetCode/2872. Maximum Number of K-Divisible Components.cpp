class Solution {
public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        if(n < 2) return 1;
        vector<vector<int>> g(n);
        vector<int> inDegree(n);
        vector<long long > value(values.begin(),values.end());

        for(auto e : edges){
            int u = e[0], v = e[1];
            g[u].push_back(v);
            g[v].push_back(u);
            inDegree[u]++;
            inDegree[v]++;
        }

        queue<int> q;
        for(int i = 0 ; i < n ; i++){
            if(inDegree[i] == 1) q.push(i);
        }

        int cc = 0;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            inDegree[cur]--;
            
            long long addval = value[cur]%k == 0 ? 0 : value[cur];

            if(addval == 0) cc++;

            for(int neib : g[cur] ){
                if(inDegree[neib] > 0 ){
                    inDegree[neib]--;
                    value[neib] +=addval;
                    if(inDegree[neib] == 1 ) q.push(neib);
                }
            }

        }

        return cc;


    }
};