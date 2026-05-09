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
    //ll cnt = 0;
    ll gc = 0;
    ll one = 0;
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
        gc = __gcd(gc, v[i]);
        if(v[i] == 1) one++;
    }
    if(gc != 1)
    {
        cout << -1 << endl;
        return;
    }
    if(one > 0)
    {
        cout << n - one << endl;
    }
    else
    {
        ll ans = LLONG_MAX;
        for(ll i = 0; i + 1 < n; i++)
        {
            ll g = v[i];
            ll cnt = 0;
            for(ll j = i + 1;  (g != 1 && j < n); j++)
            {
                g = __gcd(g, v[j]);
                cnt++;
            }
            if(g == 1)
            {
                ans = min(ans, cnt);
            }
        }
        cout << ans + (n - 1) << endl;
    }
}
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    testcase1
    {
        solve();
    }
    return 0;
}
// Accepted