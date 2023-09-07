#include <bits/stdc++.h>
using namespace std;

int GoodString(int N, string S, int K)
{
    int result = -404;
    if (N > K)
        return result;
    int ans = 0;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        if (isalpha(S[i]))
        {
            if (islower(S[i]))
            {
                ans += S[i] - 'a' + 97;
            }
            else
            {
                ans += S[i] - 'A' + 65;
                v.push_back(i);
            }
        }
        else
        {
            return result;
        }
    }
    if (v.empty() || (v.size() == 2 && v[0] % 2 != v[1] % 2))
    {
        return ans;
    }
    else
        return result;
}

int main()
{
    cout<<GoodString(4,"abcd",5);
    return 0;
}