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
    int sum = 0;
    int start = 0;
    int ans=0;
    while (sum <= n)
    {
        ans=start;
        start++;
        sum += start;
    }
    cout << ans << endl;
    return 0;
}