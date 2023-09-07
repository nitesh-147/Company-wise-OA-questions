#include <bits/stdc++.h>
using namespace std;

void dijkstra(int start, vector<vector<int>> &graph, vector<long long> &dis)
{
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push(make_pair(0, start));
    dis[start] = 0;

    while (!pq.empty())
    {
        int curr = pq.top().second;
        long long currDist = pq.top().first;
        pq.pop();

        if (currDist > dis[curr])
            continue;

        for (int neighbor : graph[curr])
        {
            long long distance = currDist + 1;
            if (distance < dis[neighbor])
            {
                dis[neighbor] = distance;
                pq.push(make_pair(distance, neighbor));
            }
        }
    }
}

int minimumWeight(int n, vector<vector<int>> &graph, int c1, int c2)
{
    vector<long long> A(n, LLONG_MAX);
    vector<long long> B(n, LLONG_MAX);

    dijkstra(c1, graph, A);
    dijkstra(c2, graph, B);

    int node = 0;
    long long dist = LLONG_MAX;

    for (int i = 0; i < n; ++i)
    {
        if (A[i] == LLONG_MAX || B[i] == LLONG_MAX)
            continue;

        if (dist > A[i] + B[i])
        {
            dist = A[i] + B[i];
            node = i;
        }
    }

    if (dist == LLONG_MAX)
        return -1;
    return node;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> graph(n);
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            graph[i].push_back(a);
        }

        int c1, c2;
        cin >> c1 >> c2;

        cout << minimumWeight(n, graph, c1, c2) << endl;
    }

    return 0;
}
