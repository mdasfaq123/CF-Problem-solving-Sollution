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
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    if(n * 25 < k)
    {
        cout << -1 << endl;
        return;
    }
    for(ll i = 0; i < n; i++)
    {
        char c = s[i];
        ll cz = 'z' - c;
        ll ac = c - 'a';
        ll m = max(cz, ac);
        ll x = min(m, k);
        if(cz >= ac)
        {
            s[i] = c + x;
        }
        else
        {
            s[i] = c - x;
        }
        k -= x;
        if(k == 0) break;
    }
    if(k != 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << s << endl;
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