#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
    return p1.second<p2.first;
}

int main(){

    int n;cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].second;
    }

    sort(v.begin(),v.end(),comp);
    int ans=1;
    int j=0;
    for(int i=1;i<n;i++){
        while(v[j].second<=v[i].first){
            j++;
        }
        ans=max(ans,i-j+1);
    }

    cout<<ans<<endl;

return 0;
}