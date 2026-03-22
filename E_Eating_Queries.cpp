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
    ll n, q; cin >> n >> q;
    vector < ll > v(n), p(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v), greater < ll > ());
    for(ll i = 0; i < n; i++)
    {
        if(i == 0) p[i] = v[i];
        else
        {
            p[i] = p[i - 1] + v[i];
        }
    }
    while(q--)
    {
        ll x; cin >> x;
        ll y = upper_bound(all(p), x - 1) - p.begin();
        if(y < n && p[y] >= x)
        {
            cout << y + 1 << endl;
        }
        else if(p[n - 1] >= x) cout << n << endl;
        else cout << -1 << endl;
    }
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