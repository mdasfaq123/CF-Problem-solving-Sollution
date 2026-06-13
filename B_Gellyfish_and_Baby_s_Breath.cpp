#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
// template <typename T>
// using ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;
using ld = long double;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define f0(i, n) for(ll i = 0; i < n; i++)
#define f1(i, n) for(ll i = 1; i <= n; i++)
#define testcase ll t; cin >> t; while(t--)
#define testcase1 ll t; t = 1; while(t--)
const ll N = 1e5 + 9;
const ll mod = 998244353;
ll v[N];
void precalc(){
    v[0] = 1;
    for(ll i = 1; i < N; i++){
        v[i] = ((v[i-1] % mod) * (2 % mod)) % mod;
    }
    //for(ll i = 0; i < N; i++) cout << v[i] << " ";
}
void solve(){
    ll n; cin >> n;
    vector < ll > p(n), q(n);
    for(auto &x: p){
        cin >> x;
    }
    for(auto &x: q){
        cin >> x;
    }
    pair < ll, ll > mxp = {p[0], 0}, mxq = {q[0], 0};
    vector < pair < ll, ll >> ans;
    for(ll i = 0; i < n; i++){
        if(p[i] > mxp.first) mxp = {p[i], i};
        // cout << "mxp" << " " << mxp.first << " " << mxp.second <<  endl;
        if(q[i] > mxq.first) mxq = {q[i], i};
        // cout << "mxq" << " " << mxq.first << " " << mxq.second <<  endl;
        ans.push_back(max(make_pair(mxp.first, q[i-mxp.second]), make_pair(mxq.first, p[i-mxq.second])));
        // cout << ans[i].first << " " << ans[i].second << endl;
        // cout << "res " << (v[ans[i].first] + v[ans[i].second]) << endl;
    }
    for(ll i = 0; i < n; i++){
        cout << (v[ans[i].first] + v[ans[i].second]) % mod << " ";
    }
    cout << endl;
}
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    precalc();
    testcase
    {
        solve();
    }
    return 0;
}