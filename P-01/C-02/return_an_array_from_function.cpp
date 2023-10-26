#include <bits/stdc++.h>
using namespace std;

int *func()
{
    static int a[5] = {1, 2, 3, 4, 5};
    return a;
}

int main()
{
    int *a = func();

    for (int i = 0; i < 5; i++)
    {
        cout << *a++ << " ";
    }

    return 0;
}