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
void solve()
{
    ll n; cin >> n;
    vector < ll > v(n);
    for(auto &x: v) cin >> x;
    sort(all(v));
    ll q; cin >> q;
    for(ll i = 1; i <= q; i++)
    {
        ll a; cin >> a;
        ll x = lower_bound(all(v), a) - v.begin();
        if(v[x] == a)
        {
            cout << "Yes" << " " << x + 1 << endl;
        }
        else
        {
            cout << "No" << " " << x + 1 << endl;
        }
    }
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