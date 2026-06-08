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
    vector < ll > v(n);
    for(auto &x: v){
        cin >> x;
    }
    sort(all(v));
    set < ll > possible = {1};
    if(v[0] == 1){
        possible.insert(2);
    }
    for(ll i = v[0]; i > 1;){
        possible.insert(i);
        if(i & 1){
            i++;
        }
        else{
            i >>= 1;
        }
    }
    ll ans = LLONG_MAX;
    for(auto & x: possible){
        ll op = 0;
        for(auto num: v){
            ll t = 0;
            while(num != x){
                if (((num & 1) && num < x - 1) || (num % 2 == 0 && num < x)) {
                    t = INT_MAX;
                    break;
                }
                if (num & 1)
                    num++;
                else
                    num >>= 1;
                t++;
                if (num == x) break;
            }
            op += t;
        }
        ans = min(ans, op);
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