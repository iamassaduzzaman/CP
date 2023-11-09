#include <bits/stdc++.h>
using namespace std;

int a[4] = {0, 1, 2, 3};
int n = 4;
int target_sum = 5, cnt = 0;

void count_subsequence(int index, int current_sum)
{
    if (index == n)
    {
        if (current_sum == target_sum)
            cnt++;
        return;
    }

    // include the current element in the sum
    count_subsequence(index + 1, current_sum + a[index]);

    // exclude the current element in the sum
    count_subsequence(index + 1, current_sum);
}

int main()
{
    count_subsequence(0, 0);

    cout << cnt << '\n';

    return 0;
}
