#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
#define pii pair<int, int>
vector<pii> g[N];
bool vis[N];
int n;

class Edge {
public: 
	int u, v, w;
	Edge(int u, int v, int w) {
		this->u = u;
		this->v = v;
		this->w = w;
	}
};

class cmp {
public:
	bool operator()(Edge a, Edge b) {
		return a.w > b.w;
	}
};

vector<Edge> edge_list;
void prims(int s) {
	priority_queue<Edge, vector<Edge>, cmp> pq;
	pq.push({s, s, 0});
	while (!pq.empty()) {
		auto [u, v, w] = pq.top();
		pq.pop();
		if (vis[v]) continue;
		vis[v] = true;
		edge_list.push_back({u, v, w});
		for (auto [x_u, x_w]: g[v]) {
			if (!vis[x_u]) {
				pq.push({v, x_u, x_w});
			}
		}
	}
	for (auto [u, v, w]: edge_list) {
		cout << u << ' ' << v << ' ' << w << '\n';
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int m; cin >> n >> m;
    while (m--) {
    	int u, v, w; cin >> u >> v >> w;
    	g[u].push_back({v, w});
    	g[v].push_back({u, w});
    }
    prims(1);
	return 0;
}