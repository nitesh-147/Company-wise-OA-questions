#include <bits/stdc++.h>
using namespace std;

int leastCommonDescendent(vector<int> v, int n, int node1, int node2)
{
    vector<int> visited(n, 0);
    int cnt1 = 0;
    int cnt2 = 0;
    int mark = node1;

    if (node1 == node2)
        return node2;

    while ((v[node1] != node1) && (v[node1] != -1) && (visited[node1] == 0) && (node1 != node2))
    {
        visited[node1]++;
        node1 = v[node1];
        cnt1++;
    }

    visited[node1]++;

    while ((v[node2] != node2) && (v[node2] != -1) && (visited[node2] != 2) && (node1 != node2))
    {
        visited[node2]++;
        node2 = v[node2];
        cnt2++;
    }

    if ((node1 != node2) || ((v[node1] == -1) && (visited[node2] == 1)) || (v[node2] == -1))
        return -1;
    else if (cnt1 > cnt2)
        return node2;
    else
        return mark;
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
    int node1, node2;
    cin >> node1 >> node2;
    cout << leastCommonDescendent(v, n, node1, node2) << endl;
}