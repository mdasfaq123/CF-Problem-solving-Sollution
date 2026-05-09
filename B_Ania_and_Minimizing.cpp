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
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    if(k == 0)
    {
        cout << s << endl;
        return;
    }
    if(n == 1 && k == 1)
    {
        cout << "0" << endl;
        return;
    }
    ll cnt = 0;
    if(s[0] > '1')
    {
        cnt++;
        s[0] = '1';
    }
    for(ll i = 0; (i < n && cnt != k); i++)
    {
        if(s[i] == '0') continue;
        else
        {
            if(i != 0)
            {
                s[i] = '0';
                cnt++;
            }
        }
        if(cnt == k) break;
    }
    cout << s << endl;
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
// Accepted