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
    ll n; cin >> n;
    ll a; cin >> a;
    ll b; cin >> b;
    for(ll x = 1; x <= n; x++){
        ll y = (n - a * x) / b;
        if(x >= 0 && y >= 0 && (a * x) + (b * y) == n){
            cout << "YES" << endl;
            cout << x << " " << y << endl;
            return;
        }
    }
    ll x = 0;
    ll y = (n / b);
    if(y * b == n){
        cout << "YES" << endl;
        cout << 0 << " " << y << endl;
        return;
    }
    y = 0;
    x = (n / a);
    if(x * a == n){
        cout << "YES" << endl;
        cout << x << " " << 0 << endl;
        return;
    }
    cout << "NO" << endl;
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