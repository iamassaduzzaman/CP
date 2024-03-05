#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<bool> f(N + 1);

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    vector<int> prime;
    for(int i = 2; i <= N; ++i) {
    	if(!f[i]) prime.push_back(i);
    	for(int j = i + i; j <= N; j += i) {
    		f[j] = true;
    	}
    }
    
    cout << prime.size() << '\n';
    for(auto x: prime) cout << x << ' ';
	return 0;
}
