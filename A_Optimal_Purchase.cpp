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
    ll n, a, b; cin >> n >> a >> b;
    if(3 * a < b)
    {
        cout << n * a << endl;
        return;
    }
    ll g = (n / 3);
    n %= 3;
    if(n == 1)
    {
        cout << (g * b) + min(1 * a, b) << endl;
    }
    else
    {
        cout << (g * b) + min(2 * a, b) << endl;
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