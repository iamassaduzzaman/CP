#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; ++i){
    	cin >> a[i];
    }

    //insertion sort
    for(int i = 2; i <= n; ++i){
    	int key = a[i];
    	int j = i - 1;
    	while(j >= 1 && a[j] > key){
    		a[j + 1] = a[j];
    		j--;
    	}
    	a[j + 1] = key; 
    }

    // output
    for(int i = 1; i <= n; ++i){
    	cout << a[i] << ' ';
    }
    return 0;
}