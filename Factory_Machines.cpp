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
bool isOk(ll mid, ll t, vector < ll > v)
{
    ll cnt = 0;
    for(ll i = 0; i < (ll)v.size(); i++)
    {
        cnt += mid / v[i];
        if(cnt >= t)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    ll n, t; cin >> n >> t;
    vector < ll > v(n);
    for(auto &x: v) cin >> x;
    ll l = 1, h = 1e18;
    ll ans = h;
    while(l <= h)
    {
        ll mid = l + (h - l) / 2;
        if(isOk(mid, t, v))
        {
            ans = mid;
            h = mid - 1;
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
