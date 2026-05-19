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
    ll z1 = v[0], z2 = v[1];
    if((2 * z1 - z2) % (n + 1))
    {
        cout << "NO" << endl;
        return;
    }
    ll y = ((2 * z1 - z2) / (n + 1));
    ll x = z1 - y * n;
    if(x < 0 || y < 0)
    {
        cout << "NO" << endl;
        return;
    }
    for(ll i = 0; i < n; i++)
    {
        v[i] -= x * (i + 1);
        v[i] -= y * (n - i);
    }
    if(count(v.begin(), v.end(), 0) == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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