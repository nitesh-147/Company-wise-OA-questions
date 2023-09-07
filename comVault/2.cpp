#include <bits/stdc++.h>
using namespace std;

void reverseWord(int l, int r, string &s)
{
    while (l < r)
    {
        swap(s[l], s[r]);
        l++;
        r--;
    }
}

int main()
{
    string s;
    getline(cin,s);
    reverse(s.begin(), s.end());
    int left = 0, right = 0;
    // cout<<s<<endl;
    while (right < s.size())
    {
        while (right < s.size() && s[right] != ' ')
            right++;
        reverseWord(left, right - 1, s);
        right++;
        left = right;
    }
    cout<<s<<endl;
    return 0;
}