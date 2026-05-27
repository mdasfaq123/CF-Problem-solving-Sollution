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
const ll mod = 1e9+7;
void solve()
{
    ll x, y; cin >> x >> y;
    ll n; cin >> n;
    if(x == 0 && y == 0)
    {
        cout <<  0 << endl;
        return;
    }
    vector < ll > f(7);
    f[1] = x;
    f[2] = y;
    for(ll i = 2; i + 1 <= 6; i++)
    {
        f[i+1] = f[i] - f[i-1];
        if(f[i+1] < 0)
        {
            f[i+1] = (f[i+1] + mod) % mod;
        }
        else
        {
            f[i+1] = (f[i+1] % mod);
        }
        f[i+1] %= mod;
    }
    f[0] = f[6];
    //cout << f[n % 6] << endl;
    if(f[n % 6] < 0) cout << (f[n% 6] + mod) % mod << endl;
    else cout << f[n % 6] % mod << endl;
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