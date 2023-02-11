#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <limits.h>
using namespace std;
#define int long long int
#define pb(x) push_back(x)
#define all(v) v.begin(), v.end()
#define rep(i, x, n) for (int i = x; i < n; i++)
#define ff first
#define ss second
#define uu unsigned long long int
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int mod = 1e9 + 7;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.ss > b.ss;
}
string getRoll(string s)
{
    int n = s.size();
    string tr = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '@')
        {
            break;
        }
        if (s[i] <= '9')
        {
            tr.push_back(s[i]);
        }
    }
    if (tr != "")
    {
        return tr;
    }
    return s;
}
void Solve()
{
    int n;
    cin >> n;
    vector<vector<string>> data(n, vector<string>(5, "emails"));
    // senders email
    for (int i = 0; i < n; i++)
    {
        cin >> data[i][0];
    }
    int scr[4] = {50, 30, 10, -10};

    // Red roses responses
    for (int i = 0; i < n; i++)
    {
        cin >> data[i][1];
    }
    // Yellow roses responses
    for (int i = 0; i < n; i++)
    {
        cin >> data[i][2];
    }
    // White roses responses
    for (int i = 0; i < n; i++)
    {
        cin >> data[i][3];
    }
    // Gun responses
    for (int i = 0; i < n; i++)
    {
        cin >> data[i][4];
    }

    map<string, int> score;
    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j < 5; j++)
        {
            string own = getRoll(data[i][0]);
            if (data[i][j] != "notemailfld3019")
            {
                string roll = getRoll(data[i][j]);
                if (roll != own)
                {
                    score[roll] += scr[j - 1];
                }
            }
        }
    }
    int sz = score.size();
    vector<pair<string, int>> fin;
    for (auto &i : score)
    {
        fin.push_back(i);
    }
    sort(all(fin), cmp);

    cout << "Number of Students - " << fin.size() << endl
         << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << fin[i].ff << " "<< fin[i].ss << endl;
    }
    return;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fio int TestCases = 1;
    // cin >> TestCases;
    while (TestCases--)
    {
        Solve();
    }

    return 0;
}
