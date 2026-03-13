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
    if(n == 1 ||  n == 2)
    {
        cout << "No" << endl;
        return;
    }
    ll total = n * (n + 1) / 2;
    ll x;
    for(ll i = 1; i <= n; i++)
    {
        if(i != 1 && total % i == 0)
        {
            x = i;
            break;
        }
    }
    cout << "Yes" << endl;
    cout << 1 << " " << x << endl;
    cout << n - 1 << " ";
    for(ll i = 1; i <= n; i++)
    {
        if(i != x) cout << i << " ";
    }
    cout << endl;
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