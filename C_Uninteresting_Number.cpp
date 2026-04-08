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
    string s; cin >> s;
    ll n = s.size();
    ll sum = 0;
    ll cnt2 = 0, cnt3 = 0;
    for(auto c: s)
    {
        sum += (c - '0');
        if(c == '2')
        {
            cnt2++;
        }
        else if(c == '3')
        {
            cnt3++;
        }
    }
    for(ll i = 0; i <= cnt2; i++)
    {
        for(ll j = 0; j <= cnt3; j++)
        {
            ll x = sum + (2 * i) + (6 * j);
            if(x % 9 == 0)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    testcase
    {
        solve();
    }
    return 0;
}
// Accepted