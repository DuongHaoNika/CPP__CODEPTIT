#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define TIME "Time: " << (double)clock() / 1000 << " s";
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'
#define maxn 100005

bool cmp(string a, string b)
{
    string tmp1 = a + b;
    string tmp2 = b + a;
    return tmp1 < tmp2;
}

int main()
{
    faster();
    int t;
    cin >> t;
    vector<string> v;
    while(t--)
    {
        int n; cin >> n;
        int tmp;
        v.clear();
        FOR(i, 1, n)
        {
            cin >> tmp;
            v.pb(to_string(tmp));
        }
        sort(v.begin(), v.end(), cmp);
        FORD(i, n - 1, 0) cout << v[i];
        cout << endl;
    }
}