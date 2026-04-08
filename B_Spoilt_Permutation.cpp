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
    vector < ll > v(n + 1), p(n + 1);
    for(ll i = 1; i <= n; i++) cin >> v[i];
    for(ll i = 1; i <= n; i++) p[i] = i;
    ll l = 0, r = 0;
    v[0] = p[0] = 0;
    for(ll i = 1; i <= n; i++)
    {
        if(v[i] != p[i])
        {
            l = i;
            break;
        }
        //cout << l << " " << v[i] << " " << p[i] << " " << i << endl;
        //continue;
    }
    /*
    if(v[i] != p[i] && r < max(r, i) && l != r)
    {
        cout << r << " " <<  v[i] << " " << p[i] << " " << i << endl;
        r = max(r, i);
    }
    */
    for(ll i = n; i >= 1; i--)
    {
        if(v[i] != p[i])
        {
            r = i;
            break;
        }
    }
    reverse(v.begin() + l, v.begin() + r + 1);
    //for(ll i = 1; i <= n; i++) cout << v[i] << " ";
    //cout << endl;
    for(ll i = 1; i <= n; i++)
    {
        if(v[i] != p[i])
        {
            cout << 0 << " " << 0 << endl;
            return;
        }
    }
    cout << l << " " << r << endl;
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