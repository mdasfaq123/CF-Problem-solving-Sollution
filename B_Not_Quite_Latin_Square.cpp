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
    char s[3][3];
    for(ll i = 0; i < 3; i++)
    {
         for(ll j = 0; j < 3; j++)
        {
             cin >> s[i][j];
        }
    }
    for(ll j = 0; j < 3; j++)
    {
        map< char, ll > mp;
        for(ll i = 0; i < 3; i++)
        {
           if(s[i][j] != '?')
           {
                mp[s[i][j]]++;
           }
        }
        mp['A']++;
        mp['B']++;
        mp['C']++;
        for(auto [a, b]: mp)
        {
            if(mp[a] == 1)
            {
                cout << a << endl;
                return;
            }
        }
        mp.clear();
    }
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