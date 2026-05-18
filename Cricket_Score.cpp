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
    vector < pair < ll, ll >> pr(n + 1);
    for(ll i = 1; i <= n; i++)
    {
        cin >> pr[i].first >> pr[i].second;
    }
    for(ll i = 1; i <= n; i++)
    {
        if(i == 1) continue;
        ll x = pr[i].first;
        ll y = pr[i].second;
        ll x1 = pr[i-1].first;
        ll y1 = pr[i-1].second;
        if(x < x1 || y < y1 || y1 == 10)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
// Accepted