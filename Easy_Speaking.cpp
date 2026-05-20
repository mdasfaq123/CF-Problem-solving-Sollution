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
bool isCoonsonant(char c)
{
    return ((c != 'a') && (c != 'e') && (c != 'i') && (c != 'o') && (c != 'u'));
}
void solve()
{
    ll n; cin >> n;
    string s; cin >> s;
    ll cnt = 0;
    for(ll i = 0; i < n; i++)
    {
        char c = s[i];
        if(isCoonsonant(c))
        {
            ++cnt;
            if(cnt == 4)
            {
                cout << "Yes" << endl;
                return;
            }
        }
        else
        {
            cnt = 0;
        }
        
    }
    cout << "No" << endl;
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