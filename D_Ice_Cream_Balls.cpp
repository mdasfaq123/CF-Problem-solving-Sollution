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
const ll mod = 1e9+7;
bool isOk(ll mid, ll n){
    ll k = (mid * mid) - mid;
    return k <= (2 * n);
}
void solve()
{
    ll n; cin >> n;
    ll l = 1, r = 3e9, k = 1e9;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(isOk(mid, n)){
            k = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    ll cvr = k * (k - 1) / 2;
    ll dplct = n - cvr;
    ll ans = k + dplct;
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