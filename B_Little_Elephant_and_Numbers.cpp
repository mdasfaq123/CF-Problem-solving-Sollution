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
set < char > get_digits(ll x)
{
    set < char > digits;
    string s = to_string(x);
    for(auto c: s) digits.insert(c);
    return digits;
}
void solve()
{
    ll n; cin >> n;
    set < char > n_d = get_digits(n);
    ll cnt = 0;
    for(ll i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            ll x = i;
            ll y = n / i;
            set<char> x_d = get_digits(x);
            for (char c : x_d) 
            {
                if (n_d.count(c)) 
                {
                    cnt++;
                    break;
                }
            }
            if(x != y)
            {
                set<char> y_d = get_digits(y);
                for (char c : y_d) 
                {
                    if (n_d.count(c)) 
                    {
                        cnt++;
                        break;
                    }
                }
            }
        }
    }
    cout << cnt << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    testcase1
    {
        solve();
    }
    return 0;
}
// Accepted