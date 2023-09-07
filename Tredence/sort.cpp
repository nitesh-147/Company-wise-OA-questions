#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int> &a, vector<int> &b)
{
    if (a[0] == b[0])
        return a[1] > b[1];
    return a[0] < b[0];
}

vector<vector<int>> rearrange_points(vector<vector<int>> points)
{
    sort(points.begin(), points.end(), comp);
    return points;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> v[i][j];
        }
    }
    vector<vector<int>> ans = rearrange_points(v);
    for (auto i : ans)
    {
        cout << i[0] << " " << i[1] << endl;
    }
    return 0;
}