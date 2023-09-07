#include <bits/stdc++.h>
using namespace std;

int countDIGIT(string str)
{
    int ans = 0;
    for (auto i : str)
    {
        if (isdigit(i))
            ans++;
    }
    return ans;
}

int countLETTER(string str)
{
    int ans = 0;
    for (auto i : str)
    {
        if (isalpha(i))
            ans++;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << countDIGIT(s) << endl;
    cout << countLETTER(s) << endl;
    return 0;
}