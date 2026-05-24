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
    vector < ll > a(n), b(n);
    for(auto &x: a) cin >> x;
    for(auto &x: b) cin >> x;
    for(ll i = 0; i < n; i++)
    {
        if(a[i] > b[i]) swap(a[i], b[i]);
    }
    ll mxa = *max_element(all(a));
    ll x = 0;
    for(ll i = 0; i < n; i++) x+= b[i];
    cout << mxa + x << endl;
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