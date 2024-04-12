#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
using ll = long long;
int a[N];
ll t[N * 4], lazy[N * 4];
// push
void push(int n, int b, int e) {
	if (lazy[n] == 0) {
		return;
	}

	t[n] = t[n] + 1LL * (e - b + 1) * lazy[n];

	if (b != e) {
		int l = 2 * n, r = 2 * n + 1;
		lazy[l] += lazy[n];
		lazy[r] += lazy[n];
	}

	lazy[n] = 0;
}
// build
void build(int n, int b, int e) {
	if (b == e) {
		t[n] = a[b];
		return;
	}
	int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
	build(l, b, mid);
	build(r, mid + 1, e);
	t[n] = t[l] + t[r];
}
// update
void upd(int n, int b, int e, int i, int j, int v) {
	push(n, b, e);
	if (i > e or j < b) {
		return;
	}
	if (b >= i and e <= j) {
		lazy[n] = v;
		push(n, b, e);
		return;
	}
	int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
	upd(l, b, mid, i, j, v);
	upd(r, mid + 1, e, i, j, v);
	t[n] = t[l] + t[r];
}
// query
ll query(int n, int b, int e, int i, int j) {
	push(n, b, e);
	if (i > e or j < b) {
		return 0;
	}
	if (b >= i and e <= j) {
		return t[n];
	}
	int l = 2 * n, r = 2 * n + 1, mid = (b + e) / 2;
	return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, q; cin >> n >> q;
	build(1, 1, n);
	while (q--) {
		int ty; cin >> ty;
		if (ty == 1) {
			int l, r, v; cin >> l >> r >> v;
			++l;
			upd(1, 1, n, l, r, v);
		}
		else {
			int i; cin >> i;
			++i;
			cout << query(1, 1, n, i, i) << '\n';
		}
	}
    
    
	return 0;
}
