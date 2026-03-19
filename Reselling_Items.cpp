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
    vector < ll > v(n);
    ll profit = 0;
    for(auto &x: v) cin >> x;
    sort(v.begin(), v.end(), greater < ll > ());
    for(ll i = 0; i < n; i++)
    {
        if(i < k)
        {
            if(v[i] > 5)
            {
                profit += (v[i] - 5);
            }
        }
        else
        {
            if(v[i] > 10)
            {
                profit += (v[i] - 10);
            }
        }
    }
    cout << profit << endl;
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