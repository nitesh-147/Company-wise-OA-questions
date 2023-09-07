#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, t;
    cin >> n >> t;
    priority_queue<long long int, vector<long long int>, greater<long long int>> p;
    while (n--)
    {
        long long int a;
        cin >> a;
        if (a == 1)
        {
            long long int b, c;
            cin >> b >> c;
            p.push(b * b + c * c);
        }
        else
        {
            vector<long long int> rem;
            long long x = t;
            long long ans = 0;
            while (x--)
            {
                rem.push_back(p.top());
                ans = p.top();
                p.pop();
            }
            cout << ans << endl;
            for (auto i : rem)
            {
                p.push(i);
            }
        }
    }
    return 0;
}