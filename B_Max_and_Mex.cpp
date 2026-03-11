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
    vector<ll> a(n);
    set<ll> s;
    ll MAX = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
        MAX = max(MAX, a[i]);
    }
    ll MEX = 0;
    while (s.count(MEX))  MEX++;
    ll x = (MEX + MAX + 1) / 2;
    if (x > MAX)
    {
        cout << n + k << endl;
    }
    else
    {
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x) ok = true; 
        }
        if (k > 0 && !ok) cout << n + 1 << endl;
        else cout << n << endl;    
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