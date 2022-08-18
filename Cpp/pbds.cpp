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

// pbds
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>,
                         rb_tree_tag, tree_order_statistics_node_update>;


void solve_kr_be()
{
    // oset<pair<int,int>> st;
    // oset ki jagah kuch bhi name rakh skte hai
    // because of template class we used we can create oset of any data type
    oset<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);

    // cout kth element
    // cout<<*s.find_by_order(k);

    // cout number of elements smaller then t
    // cout<<*s.order_of_key(t);
}
