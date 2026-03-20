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
ll digit_sum(string x)
{
    ll sum = 0;
    for(ll i = 0; i < x.size(); i++)
    {
        sum += (x[i] - '0');
    }
    return sum;
}
void solve()
{
    ll k; cin >> k;
    string n; cin >> n;
    ll d_sum = digit_sum(n);
    if(d_sum >= k)
    {
        cout << 0 << endl;
        return;
    }
    ll cnt = 0;
    sort(n.begin(), n.end());
    ll x = k;
    for(ll i = 0; i < n.size(); i++)
    {
        if(d_sum >= k) break;
        ll ase = n[i] - '0';
        ll barabo = 9 - ase;
        d_sum += barabo;
        cnt++;
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