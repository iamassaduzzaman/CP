#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
int d[N]; // how many divisors
int sum[N]; // sum of all divisors

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 1; i <= N; ++i){
        for(int j = i; j <= N; j += i){
            d[j]++;
            sum[j] += i;
        }
    }

    for(int i = 1; i <= 50; ++i){
        cout << i << " = " << d[i] << '\n';
    }

}

// O(n logn)