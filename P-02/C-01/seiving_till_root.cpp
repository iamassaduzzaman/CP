#include <bits/stdc++.h>
using namespace std;

const int N = 1e7;
vector<bool> f(N + 1);

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    vector<int> primes;
    for(int i = 2; i * i <= N; ++i) {
    	if(!f[i]) {
    		for(int j = i * i; j <= N; j += i) {
    		  f[j] = true;
    	    }
    	}

    }
    for(int i = 2; i <= N; ++i) {
    	if(!f[i]) primes.push_back(i);
    }
    cout << primes.size() << '\n';
	return 0;
}
