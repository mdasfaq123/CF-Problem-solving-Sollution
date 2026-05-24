#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define f0(i, n) for(ll i = 0; i < n; i++)
#define f1(i, n) for(ll i = 1; i <= n; i++)
#define testcase ll t; cin >> t; while(t--)
#define testcase1 ll t; t = 1; while(t--)
bool isOk(ll m, ll n,  ll x, ll y)
{
    m -= min(x, y);
    if(m < 0) return false;
    ll p = (m / x) + (m / y);
    return p >= (n - 1);
}
void solve()
{
    ll n, x, y; cin >> n >> x >> y;
    ll l = 1, r = 1e18, ans = 1e18; 
    while(l <= r)
    {
        ll mid = l + (r - l) / 2;
        if(isOk(mid, n, x, y))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
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