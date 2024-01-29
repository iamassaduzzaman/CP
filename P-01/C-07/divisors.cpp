#include <bits/stdc++.h>
using namespace std;

// naive approach
vector<int> find_divisors_naive(int n){
    vector<int> divisors;
    for(int i = 1; i <= n; ++i){
        if(n % i == 0){
            divisors.push_back(i);
        }
    }
    return divisors;
}

// sqrt root approach
vector<int> find_divisors_optimized(int n){
    vector<int> divisors;
    for(int i = 1; i * i <= n; ++i){
        if(n % i == 0){
            divisors.push_back(i);
            if(i != n / i){
                divisors.push_back(n / i);
            }
        }
    }

    return divisors;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin >> n;
    // vector<int> v = find_divisors_naive(n);
    vector<int> v = find_divisors_optimized(n);
    for(auto val: v){
        cout << val << ' ';
    }
}