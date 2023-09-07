#include<bits/stdc++.h>
using namespace std;

long getMaximumProfit(vector<int> price, vector<int> profit)
{
    long ans = -1;
    for (int i = 1; i < price.size() - 1; i++)
    {
        int m1 = -1, m2 = -1;
        for (int j = 0; j < i; j++)
        {
            if (price[j] < price[i])
                m1 = max(m1, profit[j]);
        }
        for (int j = i + 1; j < price.size(); j++)
        {
            if (price[j] > price[i])
                m2 = max(m2, profit[j]);
        }
        if(m1!=-1 && m2!=-1)
        ans = max((long)ans,(long)profit[i]+m1+m2);
    }
    return ans;
}

int main()
{
    cout<<getMaximumProfit({4,3,2,1},{4,3,2,1});
    return 0;
}