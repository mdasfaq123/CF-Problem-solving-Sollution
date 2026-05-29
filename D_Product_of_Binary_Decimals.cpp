#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define f0(i, n) for(ll i = 0; i < n; i++)
#define f1(i, n) for(ll i = 1; i <= n; i++)
#define testcase ll t; cin >> t; while(t--)
#define testcase1 ll t; t = 1; while(t--)
const ll mod = 1e9+7;
bool isOk(string x){
    for(ll i = 0; i <x.size(); i++){
        if(x[i] != '0' && x[i] != '1'){
            return false;
        }
    }
    return true;
}
void solve()
{
    ll n; cin >> n;
    string s = to_string(n);
    if(isOk(s)){
        cout << "YES" << endl;
        return;
    }
    vector < ll > st;
    vector < ll > a;
    a.push_back(10);
    a.push_back(11);
    a.push_back(101);
    a.push_back(111);
    a.push_back(1011);
    a.push_back(1101);
    a.push_back(1110);
    a.push_back(1111);
    a.push_back(10111);
    a.push_back(11011);
    a.push_back(11101);
    a.push_back(11110);
    a.push_back(11111);
    //a.push_back(111111);
    ll y = n;
    for(ll i = 0; i < a.size(); i++){
        while(y % a[i] == 0){
            y /= a[i];
            st.push_back(a[i]);
        }
    }
    if(y > 1){
        st.push_back(y);
    }
    for(ll i = 0; i < st.size(); i++){
        string x = to_string(st[i]);
        if(!isOk(x)){
            cout << "NO" << endl;
            return;
        }
    }
    //cout << "YES" << endl;
    ll ans = 1;
    for(ll i = 0; i < st.size(); i++){
        ans = ans * st[i];
    }
    if(ans == n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    // -> Accepted 
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