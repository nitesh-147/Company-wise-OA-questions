#include <bits/stdc++.h>
using namespace std;

vector<int> placement(int n, vector<int> arr)
{
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int cnt=0;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]) cnt++;
        }
        v[i]=cnt;
    }
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> ans = placement(n, v);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}