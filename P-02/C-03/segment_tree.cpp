#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int a[N];
int tree[N * 4];

// creating the tree
void build(int node, int b, int e) {
	if (b == e) {
		tree[node] = a[b];
		return;
	}

	int left = node * 2;
	int right = node * 2 + 1;
	int mid = (b + e) / 2;
	build(left, b, mid);
	build(right, mid + 1, e);
	tree[node] = tree[left] + tree[right];
}

// query
int query(int node, int b, int e, int i, int j) {
	// entirely disjoint
	if (i > e or j < b) {
		return 0;
	}
	// covers you
	if (b >= i and e <= j) {
		return tree[node];
	}
	// everyting else
	int left = node * 2;
	int right = node * 2 + 1;
	int mid = (b + e) / 2;
	int p1 = query(left, b, mid, i, j);
	int p2 = query(right, mid + 1, e, i, j);
	return p1 + p2; // sum of left and right
}

// update
void update(int node, int b, int e, int i, int newvalue) {
	// entirely disjoint
	if (i > e or i < b) {
		return;
	}

	// covers you
	if (b == e and b == i) {
		tree[node] = newvalue;
		return;
	}

	// everyting else
	int left = node * 2;
	int right = node * 2 + 1;
	int mid = (b + e) / 2;
	update(left, b, mid, i, newvalue);
	update(right, mid + 1, e, i, newvalue);
	tree[node] = tree[left] + tree[right];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n = 5;
	for (int i = 1; i <= n; ++i) {
		a[i] = i;
	}
	build(1, 1, n);
	cout << query(1, 1, n, 3, 5) << '\n'; // 12
	update(1, 1, n, 3, 9); // a[3] = 9
	cout << query(1, 1, n, 3, 5) << '\n'; // 18
    
    
	return 0;
}
