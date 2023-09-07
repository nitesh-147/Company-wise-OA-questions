#include <bits/stdc++.h>
using namespace std;

int Solve(int N, vector<int> A)
{
    int MAXN = 1e5 + 1, MOD = 1e6 + 3;
    vector<long> freq(2 * MAXN + 1);
    long mx = 0, sum = 0;
    for (auto num : A)
    {
        ++freq[num];
        mx = max((int)mx, num);
    }

    for (int i = 1; i <= 2 * MAXN; ++i)
    {
        freq[i] += freq[i - 1];
    }

    for (auto num : A)
    {
        long l = num, r = 2 * num - 1, div = 1;
        while (l <= mx)
        {
            sum = (sum + div * (freq[r] - freq[l - 1])) % MOD;
            l += num, r += num;
            ++div;
        }
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << Solve(n, v);
    }
    return 0;
}