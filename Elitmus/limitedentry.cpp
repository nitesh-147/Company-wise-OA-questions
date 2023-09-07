#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    stack<int> s;
    for (auto i : v)
    {

        while (m && !s.empty() && s.top() < i)
        {
            s.pop();
            m--;
        }
        s.push(i);
    }

    stack<int> ans;
    while (!s.empty())
    {
        ans.push(s.top());
        s.pop();
    }
    while (!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }
    return 0;
}