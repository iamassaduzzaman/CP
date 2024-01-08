#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
int MAX[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int a[n + 1]; 
    for(int i = 1; i <= n; ++i){
    	cin >> a[i];
    }

    // counting sort
    for(int i = 1; i <= n; ++i){
    	MAX[a[i]]++;
    }

    // output
    for(int i = 1; i <= N; ++i){
    	for(int j = 1; j <= MAX[i]; ++j){
    		cout << i << ' ';
    	}
    }
    return 0;
}