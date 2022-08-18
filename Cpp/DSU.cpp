#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <limits.h>
using namespace std;
#define ll long long int
#define pb(x) push_back(x)
#define ff first
#define ss second
#define uu unsigned long long int
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
class dsu
{
public:
    vector<int> par;
    vector<int> rank;
    dsu(int n)
    {
        for (int i = 0; i < n; i++)
        {
            par[i] = i;
            rank[i] = 0;
        }
    }
    int findpar(int node)
    {
        if (par[node] == node)
        {
            return node;
        }
        return par[node] = findpar(par[node]);
    }
    void unionNode(int a, int b)
    {
        a = findpar(a);
        b = findpar(b);
        if (rank[a] > rank[b])
        {
            par[b] = a;
        }
        else if (rank[b] > rank[a])
        {
            par[a] = b;
        }
        else if (rank[a] == rank[b])
        {
            par[b] = a;
            rank[a]++;
        }
        return;
    }
};
void solve_kr_be()
{
    
}
int main()
{
    // fio
    ll TestCases;
    cin >> TestCases;
    while (TestCases--)
    {
        solve_kr_be();
    }

    return 0;
}