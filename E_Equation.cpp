#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define f0(i, n) for(ll i = 0; i < n; i++)
#define f1(i, n) for(ll i = 1; i <= n; i++)
#define testcase ll t; cin >> t; while(t--)
#define testcase1 ll t; t = 1; while(t--)
bool isOk(long double mid, long double c)
{
    long double x = (mid * mid) + sqrt(mid);
    if(x < c) return false;
    return true;
}
void solve()
{
    long double c; cin >> c;
    long double l = 0, r = 1e18, ans = 0;
    while(r - l > 1e-6)
    {
        long double mid = l + (r - l) / 2;
        if(isOk(mid, c))
        {
            ans = mid;
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << fixed << setprecision(15) << ans  << endl;
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