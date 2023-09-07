#include<bits/stdc++.h>
using namespace std;

const static int MAXR = 20, MAXC = 20;
int cache[MAXC][MAXR][MAXC][MAXR],
    dp[MAXC][MAXR][MAXC][MAXR];
int n, m;
vector<string> grid;

int maxMoney(int x1, int y1, int x2, int y2)
{
    // Out of bounds of grid
    if (x1 >= n || y1 >= m || x2 >= n || y2 >= m)
        return 0;
    if (cache[x1][y1][x2][y2] != 0)
        return dp[x1][y1][x2][y2];

    // Mark state as visited
    cache[x1][y1][x2][y2] = 1;

    // Collect money from the grid cell
    int money = grid[y1][x1] == '$'?1:0;
        money += grid[y2][x2] == '$'?1:0;

    // Take maximum of all possibilities
    return dp[x1][y1][x2][y2] = money + max(
                                            max(maxMoney(x1 + 1, y1, x2 + 1, y2),
                                                maxMoney(x1, y1 + 1, x2 + 1, y2)),
                                            max(maxMoney(x1 + 1, y1, x2, y2 + 1),
                                                maxMoney(x1, y1 + 1, x2, y2 + 1)));
}

int main(){
    grid = { "*$*$*",
             "$XXX*",
             "**$*$",
             "$XXX$",
             "*$*$*" };
    cout<<maxMoney(0,0,0,0);         
}