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
const int maxn = 1001;

int check(string s)
{
    int len = s.size();
    FOR(i, 0, len - 1)
    {
        if(s[i] != '0' && s[i] != '6' && s[i] != '8') return 0;
    }
    return 1;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}