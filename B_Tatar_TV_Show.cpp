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
void solve(){
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    if(n == 1 && s[0] == '1'){
        cout << "NO" << endl;
        return;
    }
    for(ll i = 0; i + k < n; i++){
        if(s[i] == '1'){
            s[i] = '0';
            if(s[i+k] == '1'){
                s[i+k] = '0';
            }
            else{
                s[i+k] = '1';
            }
        }
        else continue;
    }
    for(ll i = 0; i + 1 < n; i++){
        if(s[i] == s[i+1] && s[i] == '0') continue;
        else{
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //precalc();
    testcase
    {
        solve();
    }
    return 0;
}