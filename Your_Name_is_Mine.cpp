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
bool isSubsequence(string a, string b)
{
    ll i = 0, j = 0;
    ll n = a.size(), m = b.size();
    string x = "";
    while(i < n && j < m)
    {
        if(a[i] == b[j])
        {
            x += a[i];
            i++;
        }
        j++;
    }
    return (ll) x.size() == (ll) a.size();
}
void solve()
{
    string a, b; cin >> a >> b;
    if(isSubsequence(a, b) || isSubsequence(b, a))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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