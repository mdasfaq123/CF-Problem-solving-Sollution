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
bool isOk(ll mid, vector < ll > v, ll x)
{
    ll u = 0;
    for(ll i = 0; i < v.size(); i++)
    {
        if(v[i] < mid) u += (mid - v[i]);
    }
    return u <= x;
}
void solve()
{
    ll n, x; cin >> n >> x;
    vector < ll > v(n);
    for(auto &x: v) cin >> x;
    ll l = 1, r = 1e12, ans = 1e12;
    while(l <= r)
    {
        ll mid = l + (r - l) / 2;
        if(isOk(mid, v, x))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
} 
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    testcase
    {
        solve();
    }
    return 0;
}