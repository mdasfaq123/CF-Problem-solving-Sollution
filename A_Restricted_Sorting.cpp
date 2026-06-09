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
void solve(){
    ll n; cin >> n;
    vector < ll > v(n);
    for(auto &x: v){
        cin >> x;
    }
    if(is_sorted(all(v))){
        cout << -1 << endl;
        return;
    }
    // ll k = LLONG_MAX;
    // for(ll i = 0; i + 1 < n; i++){
    //     k = min(k, abs(v[i] - v[i+1]));
    // }
    // cout << k << endl;
    vector < ll > p = v;
    sort(all(p));
    ll k = LLONG_MAX;
    ll mn = p[0];
    ll mx = p[n-1];
    for(ll i = 0; i < n; i++){
        if(p[i] == v[i]) continue;
        else{
            k = min(k, max(v[i] - mn, mx - v[i]));
        }
    }
    cout << k << endl;
}
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    testcase
    {
        solve();
    }
    return 0;
}
