#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define f0(i, n) for(ll i = 0; i < n; i++)
#define f1(i, n) for(ll i = 1; i <= n; i++)
#define testcase ll t; cin >> t; while(t--)
#define testcase1 ll t; t = 1; while(t--)
ll nc2(ll x)
{
    return (x * (x - 1) / 2);
}
void solve()
{
    ll n, m; cin >> n >> m;
    vector < ll > v(n);
    map < ll, ll > mp;
    for(auto &x: v)
    {
        cin >> x;
        mp[x]++;
    }
    ll total = nc2(n);
    ll same = 0;
    for(auto [x, y]: mp)
    {
        same += nc2(y);
    }
    cout << total - same << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    testcase1
    {
        solve();
    }
    return 0;
}
// Accepted