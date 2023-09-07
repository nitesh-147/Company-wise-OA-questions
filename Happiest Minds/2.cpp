#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int small = INT_MAX, large = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        small = min(small, v[i]);
        large = max(large, v[i]);
    }

    cout << abs(large - small) << endl;
    return 0;
}