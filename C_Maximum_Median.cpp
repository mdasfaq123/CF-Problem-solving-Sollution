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
bool isOk(vector < ll > v, ll mid, ll k){
    ll sum = 0;
    ll n = v.size();
    for(ll i = (n / 2); i < n; i++){
        if(v[i] < mid) sum += mid - v[i];
    }
    return sum <= k;
}
void solve()
{
    ll n, k; cin >> n >> k;
    vector < ll > v(n);
    for(auto &x: v){
        cin >> x;
    }
    sort(all(v));
    ll l = 1, r = 2e9, ans = r;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(isOk(v, mid, k)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << endl;
}
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    testcase1
    {
        solve();
    }
    return 0;
}
