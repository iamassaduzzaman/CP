#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
	if(b == 0) return a;
	return GCD(b, a % b);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    cout << GCD(4, 12) << '\n';
	return 0;
}
