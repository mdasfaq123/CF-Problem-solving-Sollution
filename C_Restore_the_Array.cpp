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
    ll x = n - 1;
    vector < ll > v(x + 1);
    for(ll i = 1; i <= x; i++)
    {
        cin >> v[i];
    }
    vector < ll > a(n + 1);
    a[1] = v[1];
    for(ll i = 2; i <= n - 1; i++)
    {
        a[i] = min(v[i], v[i - 1]);
    }
    a[n] = v[ n - 1];
    for(ll i = 1; i <= n; i++)
    {
        cout << a[i];
        if(i != n) cout << " ";
    }
    cout << endl;
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