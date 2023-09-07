#include<bits/stdc++.h>
using namespace std;

bool comp(string s1,string s2){
    return s1.size()<s2.size();
}

int solve(vector<string> arr){
      unordered_map<char,int> m;
      for(auto i:arr){
        for(auto j:i){
            m[j]++;
        }
      }
      int odd=0,even=0;
      for(auto i:m){
        odd+=(i.second%2);
        even+=(i.second/2);
      }
      sort(arr.begin(),arr.end(),comp);
      int ans=0;
      for(auto i:arr){
        int x=i.size();
        if(x&1){
            if(odd>0)
            odd--;
            else{
                even--;
                odd++;
            }
        }
        if(even<x/2) break;
        even-=(x/2);
        ans++;
      }
      return ans;
}

int main(){
  int n;cin>>n;
  vector<string> v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  cout<<solve(v);
return 0;
}