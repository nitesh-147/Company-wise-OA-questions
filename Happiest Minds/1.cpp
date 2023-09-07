#include <bits/stdc++.h>
using namespace std;

bool comp(string s1, string s2)
{
    int m=s1.size();
    int n=s2.size();
    bool chk=true;
    for(int i=0;i<min(m,n);i++){
        if(s1[i]!=s2[i]) chk=false;
    }

    if(chk){
        return s1.size()>s2.size();
    }
    else return s1<s2;
}

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), comp);
    for (auto i : v)
    {
        cout << i << endl;
    }
    return 0;
}