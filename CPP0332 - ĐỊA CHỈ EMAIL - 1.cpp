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

void solve()
{
    string s; 
    string res;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    int i = 0;
    while(ss >> tmp)
    {
        int len = tmp.size();
        FOR(i, 0, len - 1) tmp[i] = tolower(tmp[i]);
        res += tmp[0];
    }
    FOR(i, 0, tmp.size()) tmp[i] = tolower(tmp[i]);
    string t = tmp + res;
    FOR(i, 0, t.size() - 2) cout << t[i];
    cout << "@ptit.edu.vn";
}


int main()
{
    faster();
    solve();
}