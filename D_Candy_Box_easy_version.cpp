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
    map < ll, ll > mp;
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    vector < ll > p;
    for(auto &[x, y]: mp)
    {
        p.push_back(y);
    }
    sort(all(p), greater < ll > ());
    ll l = LLONG_MAX;
    ll ans = 0;
    for(auto x: p)
    {
        ll nisi = min(x, l - 1);
        if(nisi <= 0) continue;
        ans += nisi;
        l = nisi;
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
