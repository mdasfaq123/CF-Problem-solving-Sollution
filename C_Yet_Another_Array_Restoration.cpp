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
    ll n, x, y; cin >> n >> x >> y;
    ll dif = y - x;
    for(ll d = 1; d <= dif; d++)
    {
        if(dif % d) continue;
        if(dif / d + 1 > n) continue;
        ll k = min((y - 1) / d, n - 1);
        ll a = y - (k * d);
        for(ll i = 0; i < n; i++)
        {
            cout << a + (i * d) << " ";
        }
        cout << endl;
        return;
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