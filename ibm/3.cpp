#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, vector<string> logs)
{
    stack<vector<int>> st;
    vector<int> ans(n,0);
    for (auto i : logs)
    {
        int ind, t;
        string s;
        for (auto j : i)
        {
            if (j == ':')
                break;
            s.push_back(j);
        }
        ind = stoi(s);
        s.clear();
        for (int j = i.size() - 1; j >= 0; j--)
        {
            if (i[j] == ':')
                break;
            s.push_back(i[j]);
        }
        reverse(s.begin(), s.end());
        t = stoi(s);
        if (i.find("start") != string::npos)
        {
            if(!st.empty() && st.top()[2]==0){
               ans[st.top()[0]]+=(t-st.top()[1]);
            }
            st.push({ind,t,0});
        }
        else{
            if(st.top()[])
            ans[ind]+=(t-st.top()[1]+1);
            st.push({ind,t,1});
        }
    }
    return ans;
}

int main()
{
    int n;cin>>n;
    vector<string> logs(2*n);
    for(int i=0;i<2*n;i++){
        cin>>logs[i];
    }
    vector<int> ans=solve(n,logs);
    for(auto i:ans) cout<<i<<endl;

    return 0;
}