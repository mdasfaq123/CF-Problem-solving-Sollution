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
    ll a, b, c; cin >> a >> b >> c;
    ll cnt = 0;
    while((a - 1) >= 0 && (b - 2) >= 0 && (c - 4) >= 0)
    {
        ++cnt;
        a -= 1;
        b -= 2;
        c -= 4;
    }
    cout << (cnt * 1) + (cnt * 2) + (cnt * 4) << endl;
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