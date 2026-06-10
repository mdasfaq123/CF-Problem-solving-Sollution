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
vector < ll > v;
bool canConvert(string &s, string &t, ll op){
    vector < ll > deleted(s.length());
    for(ll i = 0; i < min(op, (ll)v.size()); i++){
        deleted[v[i] - 1] = 1;
    }
    ll cnt = 0;
    for(ll i = 0; i < s.length(); i++){
        if(cnt == t.length()) break;
        if(!(deleted[i]) && s[i] == t[cnt]){
            cnt++;
        }
    }
    if(cnt == t.length()) return true;
    return false;
}
bool isOk(string &s, string &t, ll id){
    if(canConvert(s, t, id)) return true;
    return false;
}
void solve()
{
    string s; cin >> s;
    string t; cin >> t;
    v.resize(s.length());
    for(ll i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    ll l = 0, r = s.length() + 1;
    while(l < r){
        ll mid = (l + r) / 2;
        if(isOk(s, t, mid)) l = mid + 1;
        else r = mid;
    }
    cout << l - 1 << endl;
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
