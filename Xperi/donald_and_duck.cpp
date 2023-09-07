#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int v[n], u[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    unordered_set<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        u[i] = s.size();
    }

    int result[m];
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        result[i] = u[temp - 1];
    }

    for (int i = 0; i < m; i++)
    {
        cout << result[i] << endl;
    }
}

int main()
{
    solve();
    return 0;
}