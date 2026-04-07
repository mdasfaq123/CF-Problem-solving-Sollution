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
    if(n <= 3)
    {
        cout << "NO" << endl;
        return;
    }
    for(ll i = 0; i + 1 < n; i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B')
        {
            for(ll j = i + 2; j + 1 < n; j++)
            {
                if(s[j] == 'B' && s[j+1] == 'A')
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    for(ll i = 0; i + 1 < n; i++)
    {
        if(s[i] == 'B' && s[i+1] == 'A')
        {
            for(ll j = i + 2; j + 1 < n; j++)
            {
                if(s[j] == 'A' && s[j+1] == 'B')
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
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
}
// Accepted