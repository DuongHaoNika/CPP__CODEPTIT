#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        vector<char> v;
        int sum = 0;
        FOR(i, 0, s.sz - 1) v.pb(s[i]);
        sort(v.begin(), v.end());
        FOR(i, 0, v.sz - 1)
        {
            if(v[i] <= '9' && v[i] >= '0') sum += (v[i] - '0');
            else cout << v[i];
        }
        cout << sum << endl;
    }
}