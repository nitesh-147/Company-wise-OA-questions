#include <bits/stdc++.h>
using namespace std;
string S;
int N;
unordered_set<string> st;

void solve()
{
    if (st.find(S) != st.end())
    {
        cout << "YES" << endl;
    }
    else
    {
        st.insert(S);
        cout << "NO" << endl;
    }
}

int main()
{
    cin >> N;
    while (N--)
    {
        cin >> S;
        solve();
    }
    return 0;
}