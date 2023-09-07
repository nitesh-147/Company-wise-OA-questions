#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int sum = 0;
    // vector<int> v;
    // int x = 1;
    // int num = 1;
    // while (v.size() < n)
    // {
    //     for (int i = 0; i < num; i++)
    //         v.push_back(x);
    //     for (int i = 0; i < num; i++)
    //         v.push_back(x + 1);

    //     x+=2;
    //     num++;
    // }
    // cout<<v[n-1]<<endl;
    // return 0;
    for (int i = 1; i < 30; i++)
    {
        int n = i;
        // cin >> n;
        int sum = 0;
        int x = 1;
        int num = 1;
        while (sum <= n)
        {
            if (n <= sum + num)
            {
                cout << x << endl;
                break;
            }
            sum += num;
            if (n <= sum + num)
            {
                cout << x + 1 << endl;
                break;
            }
            sum += num;
            x += 2;
            num++;
        }
    }
    return 0;
}