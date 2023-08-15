#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

bool ThuanNghich(string s)
{
    int l = 0, r = s.size() - 1;
    while(l <= r)
    {
        if(s[l] != s[r]) return false;
        if(s[l] == '1' || s[l] == '3' || s[l] == '5' || s[l] == '7' || s[l] == '9') return false;
        l++;
        r--;
    }
    return true;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if(ThuanNghich(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}