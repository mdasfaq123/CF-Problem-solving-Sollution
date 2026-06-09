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
void solve()
{
    ll n, x, y, z; cin >> n >> x >> y >> z;
    // if(n * x <= (z + (10 * y))){
    //     cout << n * x << endl;
    //     return;
    // }
    ll c = n, d = n;
    ll a = z;
    c -= (z * x);
    while(c > 0){
        c -= x;
        c -= (10 * y);
        a++;
    }
    // cout << n << " " << a << endl;
    ll b = 0;
    while(d > 0){
        d -= x;
        d -= y;
        b++;
    }
    cout << min(a, b) << endl;
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
// 1
// 1
// 2
// 3/
// 4/
// 4
// 2
// 9/
// 13
// 1