#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define f0(i, n) for(ll i = 0; i < n; i++)
#define f1(i, n) for(ll i = 1; i <= n; i++)
#define testcase ll t; cin >> t; while(t--)
#define testcase1 ll t; t = 1; while(t--)
const ll mod = 998244353;
const ll N = 1e3+123;
bitset < N > faka;
void solve()
{
    ll n; cin >> n;
    ll cnt = 0;
    string s = "ROYGBIV";
    string st = "GBIV";
    for(ll i = 0; i + 7 < n; i++){
        s += st[i % 4];
    }
    cout << s << endl;
    //cout << ans.size() << endl;
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