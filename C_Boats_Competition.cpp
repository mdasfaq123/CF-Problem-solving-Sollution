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
    vector < ll > w(n);
    for(auto &x: w) cin >> x;
    sort(all(w));
    ll ans = 0;
    for(ll s = 2; s <= 2 * n; s++)
    {
        ll pair = 0;
        ll l = 0, r = n - 1;
        while(l < r)
        {
            ll sum = w[l] + w[r];
            if(sum == s)
            {
                ++pair;
                ++l;
                --r;
            }
            else if(sum < s) ++l;
            else --r;
        }
        ans = max(ans, pair);
    }
    cout << ans << endl;
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