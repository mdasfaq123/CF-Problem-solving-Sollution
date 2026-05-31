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
    ll n, m; cin >> n >> m;
    vector < pair < ll, ll >> v(m), x;
    for(ll i = 0; i < m; i++){
        cin >> v[i].first >> v[i].second;
        x.push_back({v[i].second, v[i].first});
    }
    sort(all(x));
    ll ans = 0;
    for(ll i = x.size()-1; i >= 0; i--){
        if(x[i].second <= n){
            ans += x[i].second * x[i].first;
            n -= x[i].second;
        }
        else{
            ans += x[i].first * n;
            n = 0;
        }
        if(n == 0) break;
    }
    cout << ans << endl;
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