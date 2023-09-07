#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = n;
    vector<bool> vis(n, false);
    int i = n-2, j = n-1;
    while (i>=0)
    {
        while(vis[j]) j--;
        if (!vis[j] && v[j] >= 2 * v[i])
        {
            j--;
            vis[i]=true;
            ans--;
        }
        i--;
    }
    cout<<ans<<endl;
    return 0;
}