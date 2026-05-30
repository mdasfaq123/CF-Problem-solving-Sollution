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
void solve()
{
    ll n; cin >> n;
    vector < ll > a(n);
    for(auto &x: a){
        cin >> x;
    }
    sort(all(a), greater < ll > ());
    set < ll > st;
    st.insert(a[n-1]);
    for(ll i = n - 2; i >= 0; i--){
        if(st.count(a[i])){
            while(st.count(a[i])){
                a[i]--;
                if(a[i] == 0) break;
            }
            st.insert(a[i]);
        }
        else{
            st.insert(a[i]);
        }
    }
    ll ans = 0;
    for(auto x: st){
        //cout << x << endl;
        ans += x;
    }
    cout << ans << endl; // -> Accepted
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