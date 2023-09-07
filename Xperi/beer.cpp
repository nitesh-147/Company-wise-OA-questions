#include <bits/stdc++.h>
using namespace std;

void solve()
{ 
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v, v + n);
    int q;
    cin >> q;
    int result[q];
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        result[i] = upper_bound(v, v + n, temp) - v;
    }
    for (int i = 0; i < q; i++)
    {
        cout << result[i] << endl;
    }
}

int main()
{
    solve();
    return 0;
}