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
ll sum(string n)
{
    ll x = 0;
    for(auto a: n) x += (a - '0');
    return x;
}
void solve()
{
    ll n; cin >> n;
    ll ans = LLONG_MAX;
    for(ll i = n; ; i++)
    {
        string sumx = to_string(i);
        ll x = sum(sumx);
        ll gcdSum = __gcd(i, x);
        if(gcdSum > 1)
        {
            ans = i;
            break;
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