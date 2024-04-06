#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int a[N];
struct node {
	int sum = 0;
	int prop = 0;
} tree[N * 4];

// build
void build(int node, int b, int e) {
	if (b == e) {
		tree[node].sum = a[b];
		return;
	}
	int left = node * 2;
	int right = node * 2 + 1;
	int mid = (b + e) / 2;
	build(left, b, mid);
	build(right, mid + 1, e);
	tree[node].sum = tree[left].sum + tree[right].sum;
}

// update
void update(int node, int b, int e, int i, int j, int value) {
	// entirely disjoint
	if (i > e or j < b) {
		return;
	}
	// convers you
	if (b >= i and e <= j) {
		tree[node].sum += ((e - b + 1) * value);
		tree[node].prop += value;
		return;
	}
	// everything else
	int left = node * 2;
	int right = node * 2 + 1;
	int mid = (b + e) / 2;
	update(left, b, mid, i, j, value);
	update(right, mid + 1, e, i, j, value);
	tree[node].sum = tree[left].sum + tree[right].sum + ((e - b + 1) * tree[node].prop);
}

// query
int query(int node, int b, int e, int i, int j, int carry) {
	// entirely disjoint
	if (i > e or j < b) {
		return 0;
	}
	// covers you 
	if (b >= i and e <= j) {
		return tree[node].sum + carry * (e - b + 1);
	}
	// everything else
	int left = node << 1;
	int right = (node << 1) + 1;
	int mid = (b + e) >> 1;

	int p1 = query(left, b, mid, i, j, carry + tree[node].prop);
	int p2 = query(right, mid + 1, e, i, j, carry + tree[node].prop);

	return p1 + p2;
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n = 5;
	for (int i = 1; i <= n; ++i) {
		a[i] = i;
	}

	build(1, 1, n);
	cout << query(1, 1, n, 1, 5, 0) << '\n';
	update(1, 1, n, 2, 4, 2);
	update(1, 1, n, 4, 5, 3);
	cout << query(1, 1, n, 3, 5, 0) << '\n';
	return 0;
}
