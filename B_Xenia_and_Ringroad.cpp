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
    ll n, m; cin >> n >> m;
    vector < ll > v(m + 1);
    for(ll i = 1; i <= m; i++){
        cin >> v[i];
    }
    vector < ll > p(n);
    for(ll i = 1; i <= n - 1; i++){
        p[i] = i;
    }
    p[0] = n;
    ll akhon = 1;
    ll cnt = 0;
    /*
    for(ll i = 1; i <= m; i++){
        ll x = v[i];
        for(ll a = akhon; ; a++){
            if(p[(a % n)] == x){
                akhon = a;
                break;
            }
            //a++;
            cnt++;
        }
    }
    */ // - got tle
    for(ll i = 1; i <= m; i++){
        cnt += (v[i] - akhon + n) % n; //(important part -> main logic)
        akhon = v[i];
    }
    cout << cnt << endl;
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