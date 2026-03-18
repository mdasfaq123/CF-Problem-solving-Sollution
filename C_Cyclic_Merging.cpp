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
void solve()
{
    ll n; cin >> n;
    vector < ll > v(n);
    for(auto &x: v) cin >> x;
    if(n == 2)
    {
        cout << max(v[0], v[1]) << endl;
        return;
    }
    ll max_val = 0;
    ll sum_of_val = 0;
    for(ll i = 0; i < n; i++)
    {
        ll x = max(v[i], v[(i+1) % n]);
        sum_of_val += x;
        max_val = max(x, max_val);
    }
    cout << (sum_of_val - max_val) << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    testcase
    {
        solve();
    }
    return 0;
}
// Accepted