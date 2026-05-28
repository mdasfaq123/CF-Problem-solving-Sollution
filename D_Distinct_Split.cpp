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
    string s; cin >> s;
    //map < char, ll > mp;
    //for(auto x: s){
    //    mp[x]++;
    //}
    /*
    ll cnt = 0;
    for(auto [x, y]: mp){
        if(y >= 2) cnt += 2;
        else cnt++;
    }
    cout << cnt << endl;
    */ // -> Wrong Answer
    string a = "", b = s;
    a += s[0];
    b.erase(b.begin());
    map < char, ll > ma, mb;
    ma[a[0]]++;
    for(auto x: b){
        mb[x]++;
    }
    ll ans = ma.size() + mb.size();
    while(b.size() != 1){
        char c = *b.begin();
        a += c;
        ma[c]++;
        mb[c]--;
        b.erase(b.begin());
        if(mb[c] == 0) mb.erase(c);
        ans = max(ans, (ll)ma.size() + (ll)mb.size());
    }
    ans = max(ans, (ll)ma.size() + (ll)mb.size());
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