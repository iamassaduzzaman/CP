#include <bits/stdc++.h>
using namespace std;

int inverse(int a, int m) {
	for(int i = 1; i <= m; ++i) {
		if(1LL * a * i % m == 1) {
			return i;
		}
	}
	return -1; // inverse dosn't exist
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
    cout << inverse(2, 5) << '\n'; // 3
    cout << inverse(3, 6) << '\n'; // -1
	return 0;
}
