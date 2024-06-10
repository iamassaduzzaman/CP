#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
const int N = 1e5 + 5;
const int INF = 1e9 + 5;
vector<pii> g[N];
bool vis[N];
vector<int> dist(N, INF);

void dijkstra(int source) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[source] = 0;
    pq.push({dist[source], source});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        vis[u] = true;

        for (auto [v, w]: g[u]) {
            if (vis[v]) continue;
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, e; cin >> n >> e;
    while (e--) {
        int u, v, w; cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    dijkstra(1);

    for (int i = 1; i <= n; ++i) {
        cout << "Distance of " << i << ": " << dist[i] << '\n';
    }
    return 0;
}

/* 
5 7
1 3 2
1 2 10
2 3 1
3 4 2
4 5 7
2 4 3
2 5 2
*/