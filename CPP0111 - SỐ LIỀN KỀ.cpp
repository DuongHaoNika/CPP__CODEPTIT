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

int solve(string s)
{
    int len = s.size();
    FOR(i, 1, len - 1)
    {
        int k = abs(s[i] - s[i - 1]);
        if(k != 1) return 0;
    }
    return 1;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if(solve(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}