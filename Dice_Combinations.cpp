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
ll dp[1000005];
ll fn(ll remSum)
{
    if(remSum == 0) return 1;
    if(dp[remSum] != -1) return dp[remSum];
    ll ans = 0;
    for(ll i = 1; i <= 6; i++)
    {
        if(remSum - i >= 0)
        {
            ans += fn(remSum - i);
            ans %= mod;
        }
    }
    return dp[remSum] = ans;
}
void solve()
{
    ll n; cin >> n;
    memset(dp, -1, sizeof dp);
    cout << fn(n) << endl;
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