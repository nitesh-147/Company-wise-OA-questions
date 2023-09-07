#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> v(n, 0);
    for (long long i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        if(a!=-1)
        v[a] += i;
    }
    long long mx = -1;
    long long res = 0;
    for (long long i = 0; i < n; i++)
    {
        if (mx < v[i])
        {
            mx = v[i];
            res = i;
        }
    }
    cout << res;
    return 0;
}