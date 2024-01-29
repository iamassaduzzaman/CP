#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int a[N], d[N];

int main(){
    a[1] = 1;
    a[2] = 3;
    a[3] = 5;
    a[4] = 2;
    a[5] = 4;
    
    // finding the difference array from the original array
    for(int i = 1; i <= 5; ++i){
        d[i] = a[i] - a[i - 1];
    }

    for(int i = 1; i <= 5; ++i){
        cout << d[i] << ' ';
    }
    cout << '\n';

    // finding the original array from the difference array
    for(int i = 1; i <= 5; ++i){
        a[i] = a[i - 1] + d[i];
    }

    for(int i = 1; i <= 5; ++i){
        cout << a[i] << ' ';
    }
    cout << '\n';

    return 0;
}