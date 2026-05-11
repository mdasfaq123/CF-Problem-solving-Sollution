#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
    string s; cin >> s;
    ll m; cin >> m;
    string t;
    vector < ll > p[26];
    for(ll i = 0; i < n; i++)
    {
        p[s[i] - 'a'].push_back(i+1);
    }
    for(ll i = 0; i < m; i++)
    {
        cin >> t;
        vector < ll > cnt(26);
        for(auto c: t)
        {
            ++cnt[c - 'a'];
        }
        ll ans = -1;
        for(ll j = 0; j < 26; j++)
        {
            if(cnt[j] > 0)
            {
                ans = max(ans, p[j][cnt[j] - 1]);
            }
        }
        cout << ans << endl;
    }
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
