#include <bits/stdc++.h>
using namespace std;

bool comp(string s1, string s2)
{
    int m = s1.size();
    int n = s2.size();
    bool chk = true;
    for (int i = 0; i < min(m, n); i++)
    {
        if (s1[i] != s2[i])
            chk = false;
    }
    string temp = s1;
    char last = s2.back();
    if (n > m)
    {
        temp = s2;
        last = s1.back();
    }
    for (int i = min(m, n); i < max(m, n); i++)
    {
        if (temp[i] != last)
        {
            chk = false;
            break;
        }
    }

    if (chk)
    {
        return s1.size() > s2.size();
    }
    else
        return s1 < s2;
}

int main()
{
    vector<string> v;
    string s;
    while (getline(cin, s))
    {
        v.push_back(s);
    }
    if (v.size() == 0)
    {
        return 0;
    }
    sort(v.begin(), v.end(), comp);
    for (auto i : v)
    {
        cout << i << endl;
    }
    return 0;
}