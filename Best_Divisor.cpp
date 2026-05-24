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
bool isPrime(ll n)
{
    for(ll i = 2; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
void solve()
{
    ll n; cin >> n;
    if(isPrime(n))
    {
        cout << n << endl;
        return;
    }
    vector < ll > v;
    for(ll i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            v.push_back(i);
            if(i != (n / i))
            {
                v.push_back(n / i);
            }
        }
    }
    vector < pair < ll, ll >> p;
    for(ll i = 0; i < v.size(); i++)
    {
        ll x = v[i];
        string a = to_string(x);
        ll sm = 0;
        for(ll i = 0; i < a.size(); i++)
        {
            sm += (a[i] - '0');
        }
        p.push_back({x, sm});
    }
    ll d = 0;
    ll an = 0;
    for(ll i = 0; i < p.size(); i++)
    {
        if(d <= p[i].second)
        {
            an = p[i].first;
            d = p[i].second;
        }
    }
    cout << an << endl;
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
